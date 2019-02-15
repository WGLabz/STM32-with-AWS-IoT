#ifndef __MQTT_SERVER_SETTING_H__
#define __MQTT_SERVER_SETTING_H__

//const char MQTT_SERVER_HOST_NAME[] = "a32e6rcmmefpik-ats.iot.ap-southeast-2.amazonaws.com"; //Sydney
const char MQTT_SERVER_HOST_NAME[] = "a32e6rcmmefpik-ats.iot.us-east-2.amazonaws.com"; //Ohio
const char MQTT_CLIENT_ID[] = "gfdfgdsggfsdgfsdgf";
const char MQTT_USERNAME[] = "nmnnmm";
const char MQTT_PASSWORD[] = "mmnnnmn";
const char MQTT_TOPIC_PUB[] = "test/sensors/data";
const char MQTT_TOPIC_SUB[] = "test/lock/status";
const char PUB_CARD[] = "test/lock/card";


const int MQTT_SERVER_PORT = 8883;

//For Sydney location

// * (optional) Client certificate here in PEM format.
// * Set NULL if you don't use.
// * "-----BEGIN CERTIFICATE-----\n"
// * ...
// * "-----END CERTIFICATE-----\n";
// */
//const char* SSL_CLIENT_CERT_PEM = 
//"-----BEGIN CERTIFICATE-----\n"
//"MIIDWjCCAkKgAwIBAgIVAJ7URx/gIJc149C4OphLBAxBGifBMA0GCSqGSIb3DQEB\n"
//"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"
//"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xOTAyMTIwNjQ1\n"
//"NDBaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"
//"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCetRg7kZ7NoLyofEz+\n"
//"lBOq66StpNtILgv5iubhbcGTya4feEeYkBj83GjfKTBXDn8XiC+jWmilLHk81zmI\n"
//"ZRgSJ7mYszZosYiZUdI4L96MyhcmoCv4R57mx0pTYRsHosqGtyoaVmHDNWN/T+Y3\n"
//"c0u0PS4mD7znmpZAh+RgZi1l4CaLY35NhbOTJzm83BOXHwx7AtjsJx7+azCnruIe\n"
//"ZuqaYc9W8DyaP8cw9QU7lm9THdWCw9yJipr/Q7Rx4GGEt/h3gYVIEDltF5jEg57O\n"
//"a2gmsQRXitV4XwHRZiXK06EzysCZhkLEl7kJdwVOhRSZ/e/mzvfuWfpJYmzwFBW6\n"
//"r7y3AgMBAAGjYDBeMB8GA1UdIwQYMBaAFLxLAFdK2b2RzLSpxVjyZ/9/BWX+MB0G\n"
//"A1UdDgQWBBRF/QnhF3x0kaHu0JNtyAXJtEPKvzAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"
//"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAhg8L5lzaRDrxa+544ftFSyj6\n"
//"JVaqGuyhZYUVaBrQp1LZRujEZkqVJEWv8JJ/OJVInBgRyHo+cmo762aP2Nn5lmfF\n"
//"SQgwY8eJH+3w+B4q6gWJS1mFqsOLWHX1QN91uy7O5fAmTFVEvY9i/hr5TH+HH0Ig\n"
//"tt6ttAxJchokgcWo8IkB5RtI2z86pb2ElJFCl5fV6o6/Rtmb9hQX0ZILTasjUdkP\n"
//"FJBtAUBx8/8C75kqwsNAIVZ9Yg09DAIGJIsivO3om08vZk2SrtQT1tf+P7AVqJ7w\n"
//"MDY7Z+8NppBtoEz9JPLSiF+p8N2a9DIDT9ZClqU2qqvcC5wR2o6ut1XSFxx/kg==\n"
//"-----END CERTIFICATE-----\n";
//
//
///*
// * (optional) Client private key here in PEM format.
// * Set NULL if you don't use.
// * "-----BEGIN RSA PRIVATE KEY-----\n"
// * ...
// * "-----END RSA PRIVATE KEY-----\n";
// */
//const char* SSL_CLIENT_PRIVATE_KEY_PEM = 
//"-----BEGIN RSA PRIVATE KEY-----\n"
//"MIIEpAIBAAKCAQEAnrUYO5GezaC8qHxM/pQTquukraTbSC4L+Yrm4W3Bk8muH3hH\n"
//"mJAY/Nxo3ykwVw5/F4gvo1popSx5PNc5iGUYEie5mLM2aLGImVHSOC/ejMoXJqAr\n"
//"+Eee5sdKU2EbB6LKhrcqGlZhwzVjf0/mN3NLtD0uJg+855qWQIfkYGYtZeAmi2N+\n"
//"TYWzkyc5vNwTlx8MewLY7Cce/mswp67iHmbqmmHPVvA8mj/HMPUFO5ZvUx3VgsPc\n"
//"iYqa/0O0ceBhhLf4d4GFSBA5bReYxIOezmtoJrEEV4rVeF8B0WYlytOhM8rAmYZC\n"
//"xJe5CXcFToUUmf3v5s737ln6SWJs8BQVuq+8twIDAQABAoIBAQCb7Mg2HkerNvSj\n"
//"hBwRMmJwVrugbouSSssxDKrxZ+f7zvXnrUCKP2iNZe8S8WCw52kuMXq8PyL4xM0I\n"
//"XVwFCW2wyJ6ry8b07ReLqruiwEUihZphNJR+hb80dTAs4wavZd0cpfATmDLMmzN5\n"
//"7YH9kKUcG8+vTV8HHPXpyJkzrK+Fmjt+eq3AiryOhcGfymwaKJ8BQYc4GJb7pvvy\n"
//"MaO6U1EyW/NvjUd4YWVU4hXtC3aKILWSSryvcOEHETAhTWJE+GzZYXTLZsqX7zN7\n"
//"ZSy7WW0/zUZD/mgc3olD1M6Asxc3BqOTSq1SNs4az0M1t+czx+Uc9Z/Ko/dPBHi5\n"
//"uZowcLAhAoGBANAYmO6B4pzslRIBJknHIQUdVtD8iu9SEJw6N0Ow0SCbWily9Nbx\n"
//"ewXf9rUAd7O6wGybyAAJB885LWljc/lxyK70WFOONzRWbaakNvpJC8kvaESZAeEN\n"
//"6Esn1KRHgGGvZQozULMznRjSoUeJFKnKt13euIrp3NlnN5KZ00U0xigbAoGBAMM9\n"
//"827YqQAQBLVI7wqqO/wI+7jTORQoulpPrG1RZFCdBwVIQFO+xpPGfc0gEAH6Zca4\n"
//"tANUc6dnCdgIHp+yAe9Q4WmnzH7uU0H3vh0+NllJl1IFOUcBjZsv/j7Or5m+5jP/\n"
//"gsUwjhk32On6tCmvjTXqJWuBcbfDytwgE4mRr3+VAoGAM4WDh7m8w6GHnveN5UJa\n"
//"GIwVDJUaSPqGhkebmzTR8kLEZfLCT91l2iSDTnkZKfSY48sGD4ws1M+RQMCQ3Deh\n"
//"uj9hBv71CA5GA7YwrnMbaepE5IcFghURaFoqOapCTO1CFO5zkoq64IR1zeJQrWE1\n"
//"WRZllm8kcOcvSSqwtjfEv/UCgYAdlqnpxpP2GndcMe1oJFxq2cGsRPaFg5aaUTDE\n"
//"cG1PejyyJDz7dBIMGyy9hXpnklcSQrOlPYs5d3gacUCS2xtH9W3z4SYwplWfzbfW\n"
//"HrOF3I0+NOR1Slr3hdJ2GkSqfC/O+Y4L7EvcroYFD6V2G9C+tvlszXU6cEWyDnpn\n"
//"gtih8QKBgQCUrS75YxGkR4F7t5DyB3WtJsPD0pA5oqgrlQd/tWe2BJmUQFqJd+QE\n"
//"0Gw4HyPJweBJvPowbhQHrB/VzPKAtINJ+dlhxAk7wufHOgiuYU5eEaDf1pUowYHk\n"
//"JGjf2GAI1Yvg35YuDa3uicHqvYPEAtgf7dbBUxUoisCv7uJ3s3P6Jg==\n"
//"-----END RSA PRIVATE KEY-----\n"
//;

// For Ohio Location

const char* SSL_CA_PEM =

/* Amazon Root CA 1 */
"-----BEGIN CERTIFICATE-----\n"
"MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n"
"ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n"
"b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n"
"MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n"
"b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n"
"ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n"
"9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n"
"IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n"
"VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n"
"93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n"
"jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n"
"AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n"
"A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n"
"U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n"
"N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n"
"o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n"
"5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n"
"rqXRfboQnoZsG4q5WTP468SQvvG5\n"
"-----END CERTIFICATE-----\n"
/* */;

/*
 * (optional) Client certificate here in PEM format.
 * Set NULL if you don't use.
 * "-----BEGIN CERTIFICATE-----\n"
 * ...
 * "-----END CERTIFICATE-----\n";
 */
const char* SSL_CLIENT_CERT_PEM = 
"-----BEGIN CERTIFICATE-----\n"
"MIIDWTCCAkGgAwIBAgIUV3MY8aXlYTvamRwwuwc73iLRrcswDQYJKoZIhvcNAQEL\n"
"BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n"
"SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTE5MDIwNjA3Mjgy\n"
"OFoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n"
"ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAPImYpVvzjWUZ1GIasiC\n"
"gEGxuHFY8aYXK/vhHKMFiJ4dsCljJG28KSlfYqcd4DO6DRlLXDcEkdHvs+A9cuVy\n"
"bRI2fQwczhOQo2UGLYAXxBtKmNVw0zCNcbL7uOrSXyRQiXO0FeRl7Hg6gDlKFODT\n"
"XKNr8S7qJPhutDm638V37TuxmCxz6rHRkbIMVVkKFw6lYuGXQ59+XUY3n6GbIopR\n"
"2RR3aA0g3c4frA83epWANNoTs6wmgheQNjK+wwEQ8xGxguA+rvUVKkR2sDqMgnnj\n"
"zz+wl5SwDGsQVrE8FUqfNilNmj5w9IIt9EE45C1vLHkfDqO1cIsWSLCrx99QRJO6\n"
"XSECAwEAAaNgMF4wHwYDVR0jBBgwFoAUypsPGXFwSCHWFjBnYXCZ+q0+9aUwHQYD\n"
"VR0OBBYEFETlazriOO2d+97xNoQ5sPtJJUKwMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n"
"AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQCciVq4Qc6BSak5lGUX2gvA6gNM\n"
"N3o28q1PB38XkjTHcQYavtGju8n3+/3fBCPAUYz/cM4KK69WW8ucpNG2DJUCEpua\n"
"D7W43izYE95xjdEyfyCzv7Zs4C+N+YQ/aj6HCJhhf/5KpTVVdR4jr8kAWiuX1W35\n"
"c15H8AFnLSWPA5z6T84j6txzTt54t8UR4H9yVUBxI4yFj7Wc4gGoecr1DkSAN8mE\n"
"OhpC84idXuGRq489tg/Qt/EAs38bK3dQIWj6hwK9mI3Lax1aSqupA/KR1b4TltX7\n"
"xFZsjU/CRUYa1a7/uTnzxtBIt4h6Kyj8hmzHy+ezM6ZhxBagJESH47C/B8Kd\n"
"-----END CERTIFICATE-----\n";


/*
 * (optional) Client private key here in PEM format.
 * Set NULL if you don't use.
 * "-----BEGIN RSA PRIVATE KEY-----\n"
 * ...
 * "-----END RSA PRIVATE KEY-----\n";
 */
const char* SSL_CLIENT_PRIVATE_KEY_PEM = 
"-----BEGIN RSA PRIVATE KEY-----\n"
"MIIEowIBAAKCAQEA8iZilW/ONZRnUYhqyIKAQbG4cVjxphcr++EcowWInh2wKWMk\n"
"bbwpKV9ipx3gM7oNGUtcNwSR0e+z4D1y5XJtEjZ9DBzOE5CjZQYtgBfEG0qY1XDT\n"
"MI1xsvu46tJfJFCJc7QV5GXseDqAOUoU4NNco2vxLuok+G60ObrfxXftO7GYLHPq\n"
"sdGRsgxVWQoXDqVi4ZdDn35dRjefoZsiilHZFHdoDSDdzh+sDzd6lYA02hOzrCaC\n"
"F5A2Mr7DARDzEbGC4D6u9RUqRHawOoyCeePPP7CXlLAMaxBWsTwVSp82KU2aPnD0\n"
"gi30QTjkLW8seR8Oo7VwixZIsKvH31BEk7pdIQIDAQABAoIBAQCX0WsjqAqQWy//\n"
"1Vilx/QjvAoYvpwa9xIzhGrQ5spF3/UvraIMTtk7wDr47elAZRiLUE1LjUjjZ7bO\n"
"E5iytHAf6Bu0eWbWq2tWDm5+jef8+GMkBu3R1gyAHARO7YCLIxdafIDxRtngc0Ur\n"
"JgA7CSleqHF5aYGuZLIIM9rSUqNhNXoRtGAqhPsQbf2R/uF4JEDWTnXGKMhnuiCK\n"
"cwPT63LTV/6o+LOS4ycC8At0jegiGGLdJ6B9iqGt6jY49rltqT8nVTtl3gjUIIiZ\n"
"+W8vF+l+rKQqBMx+sAbFXKXQ6HBGuZOph0YD5gnDAn+NT/WK5dvpIwsOkY2OxBdW\n"
"8Pso9sSVAoGBAP/qZEsOKX+4uBGYpAkYeB3HsgKw3N036cppRZaeJtx99+OGarAn\n"
"VgL3RrswzSYFOgD/r6iOXald37zg3f5ExlYXQA8h+uDKiI5vSs96gyQYrk3NfXvL\n"
"bRXewEJoPn7G/lQwVSRYY3aEQfX245RxoW4qen5tzUyVYXM28edyi9+7AoGBAPI6\n"
"1L24XyI+wQDhiQQ6yZiyZp7mrWvw5+IwKAz11fMoCN3IZwljFXwfQSkhsIFjr06E\n"
"WZtH68i7s33N09pzJaxRPo5Pdu2rsKI2G35Y+3iaBu/jakYWJ6ohwaPo9jNeFh0e\n"
"8Yr5TLOy+1zwxjqWQeDzpre2l5rqvTylRr5pPILTAoGAY/sq27fYtrFwGE/OJk+M\n"
"/fV6slpur26cxBuEuGdpP1NneViWbeOwUtBQrelO/L+l/aXm9q9IIFcwhhZEJIay\n"
"BghnWoIoBZKa7yrDy3NNsNiDoJnboHXFVHoGGuunHtiXnESVvvFZSoA5VOLz3pbW\n"
"PrgRyzsSrgzeWajpsUarJukCgYBGICwIxMCd7Gb5t1FwbQiB8VvuMsAQGM042VIu\n"
"9li7LWLruiHCQPIuXeoCW2N7Af31kDFU2Ax1r4l2KUlk26MTcO3YSz8V7XeUbm+l\n"
"M2OR9Z1+g2r34WAYS++AYWgtVNa4FYY+ApBnEbDdpkLtISTvV/pzAyR+z+h7Dyoc\n"
"4+CFywKBgGkF+qMqYtslR5s1fQrbVbPzk7xZNf5x+zU3U93a5BeF5MS526tLc0ix\n"
"3KUQFuqqPXrkLH1lMptu/wCGBXa4igXMW6kMZXxunKRAsjOazYTd3m7DlNAQOCYn\n"
"0Ku1R3ZdbkBRF9S+sflxGOts2N0NnjPDs5V86XEC5bXLGxX3tyYu\n"
"-----END RSA PRIVATE KEY-----\n"
;
#endif /* __MQTT_SERVER_SETTING_H__ */
