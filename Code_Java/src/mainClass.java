

import com.amazonaws.services.iot.client.AWSIotMqttClient;
import com.amazonaws.services.iot.client.AWSIotException;
import com.amazonaws.services.iot.client.AWSIotMessage;
import com.amazonaws.services.iot.client.AWSIotQos;
import com.amazonaws.services.iot.client.AWSIotTimeoutException;
import com.amazonaws.services.iot.client.AWSIotTopic;
import com.amazonaws.services.iot.client.sample.sampleUtil.CommandArguments;
import com.amazonaws.services.iot.client.sample.sampleUtil.SampleUtil;
import com.amazonaws.services.iot.client.sample.sampleUtil.SampleUtil.KeyStorePasswordPair;

/**
 * This is an example that uses {@link AWSIotMqttClient} to subscribe to a topic and
 * publish messages to it. Both blocking and non-blocking publishing are
 * demonstrated in this example.
 */
public class mainClass {

    private static final String TestTopic = "aws/test/data";
    private static final AWSIotQos TestTopicQos = AWSIotQos.QOS0;

    private static AWSIotMqttClient awsIotClient;

    public static void setClient(AWSIotMqttClient client) {
        awsIotClient = client;
    }

    public static class BlockingPublisher implements Runnable {
        private final AWSIotMqttClient awsIotClient;

        public BlockingPublisher(AWSIotMqttClient awsIotClient) {
            this.awsIotClient = awsIotClient;
        }

        @Override
        public void run() {
            long counter = 1;

            while (true) {
                String payload = "hello from blocking publisher - " + (counter++);
                try {
                    awsIotClient.publish(TestTopic, payload);
                } catch (AWSIotException e) {
                    System.out.println(System.currentTimeMillis() + ": publish failed for " + payload);
                }
                System.out.println(System.currentTimeMillis() + ": >>> " + payload);

                try {
                    Thread.sleep(1000);
                } catch (InterruptedException e) {
                    System.out.println(System.currentTimeMillis() + ": BlockingPublisher was interrupted");
                    return;
                }
            }
        }
    }

    public static class NonBlockingPublisher implements Runnable {
        private final AWSIotMqttClient awsIotClient;

        public NonBlockingPublisher(AWSIotMqttClient awsIotClient) {
            this.awsIotClient = awsIotClient;
        }

        @Override
        public void run() {
            long counter = 1;

            while (true) {
                String payload = "hello from non-blocking publisher - " + (counter++);
                AWSIotMessage message = new NonBlockingPublishListener(TestTopic, TestTopicQos, payload);
                try {
                    awsIotClient.publish(message);
                } catch (AWSIotException e) {
                    System.out.println(System.currentTimeMillis() + ": publish failed for " + payload);
                }

                try {
                    Thread.sleep(1000);
                } catch (InterruptedException e) {
                    System.out.println(System.currentTimeMillis() + ": NonBlockingPublisher was interrupted");
                    return;
                }
            }
        }
    }

    private static void initClient(CommandArguments arguments) {
//        String clientEndpoint = arguments.getNotNull("clientEndpoint", SampleUtil.getConfig("clientEndpoint"));
//        String clientId = arguments.getNotNull("clientId", SampleUtil.getConfig("clientId"));
//
//        String certificateFile = arguments.get("certificateFile", SampleUtil.getConfig("certificateFile"));
//        String privateKeyFile = arguments.get("privateKeyFile", SampleUtil.getConfig("privateKeyFile"));
//        
        //    
        String clientEndpoint = "a32e6rcmmefpik-ats.iot.us-east-2.amazonaws.com";       // replace <prefix> and <region> with your own
        String clientId = "dfjkjdf";                              // replace with your own client ID. Use unique client IDs for concurrent connections.
        String certificateFile = "/home/bikashp/certs/f1acf8561b-certificate.pem.crt";                       // X.509 based certificate file
        String privateKeyFile = "/home/bikashp/certs/f1acf8561b-private.pem.key";
        // SampleUtil.java and its dependency PrivateKeyReader.java can be copied from the sample source code.
        // Alternatively, you could load key store directly from a file - see the example included in this README.
        KeyStorePasswordPair pair = SampleUtil.getKeyStorePasswordPair(certificateFile, privateKeyFile);
        awsIotClient = new AWSIotMqttClient(clientEndpoint, clientId, pair.keyStore, pair.keyPassword);

//        // optional parameters can be set before connect()
//        client.connect();
//        //
//        
//        if (awsIotClient == null && certificateFile != null && privateKeyFile != null) {
//            String algorithm = arguments.get("keyAlgorithm", SampleUtil.getConfig("keyAlgorithm"));
//
//            KeyStorePasswordPair pair = SampleUtil.getKeyStorePasswordPair(certificateFile, privateKeyFile, algorithm);
//
//            awsIotClient = new AWSIotMqttClient(clientEndpoint, clientId, pair.keyStore, pair.keyPassword);
//        }
//
//        if (awsIotClient == null) {
//            String awsAccessKeyId = arguments.get("awsAccessKeyId", SampleUtil.getConfig("awsAccessKeyId"));
//            String awsSecretAccessKey = arguments.get("awsSecretAccessKey", SampleUtil.getConfig("awsSecretAccessKey"));
//            String sessionToken = arguments.get("sessionToken", SampleUtil.getConfig("sessionToken"));
//
//            if (awsAccessKeyId != null && awsSecretAccessKey != null) {
//                awsIotClient = new AWSIotMqttClient(clientEndpoint, clientId, awsAccessKeyId, awsSecretAccessKey,
//                        sessionToken);
//            }
//        }
//
//        if (awsIotClient == null) {
//            throw new IllegalArgumentException("Failed to construct client due to missing certificate or credentials.");
//        }
    }

    public static void main(String args[]) throws InterruptedException, AWSIotException, AWSIotTimeoutException {
        CommandArguments arguments = CommandArguments.parse(args);
        initClient(arguments);

        awsIotClient.connect();

        AWSIotTopic topic = new TestTopicListener(TestTopic, TestTopicQos);
        awsIotClient.subscribe(topic, true);

        Thread blockingPublishThread = new Thread(new BlockingPublisher(awsIotClient));
        Thread nonBlockingPublishThread = new Thread(new NonBlockingPublisher(awsIotClient));

        blockingPublishThread.start();
        nonBlockingPublishThread.start();

        blockingPublishThread.join();
        nonBlockingPublishThread.join();
        
        awsIotClient.publish(TestTopic, AWSIotQos.QOS0, "sdhh");
    }

}