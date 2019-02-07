#include "mbed.h"
#include "HTS221Sensor.h"
#include "LPS22HBSensor.h"

//Intialization of sensors
static DevI2C devI2c(PB_11,PB_10);
static LPS22HBSensor press_temp(&devI2c);
static HTS221Sensor hum_temp(&devI2c);

//Serial port for Debug
Serial pc(USBTX, USBRX); // tx, rx

int main() {
    float temperature, humidity, pressure;
    pc.baud(115200);
    
    //Sensors Initiailization
    press_temp.init(NULL);
    hum_temp.init(NULL);
    press_temp.enable();
    hum_temp.enable();
    
    while(1) { //Forever Loop
    hum_temp.get_temperature(&temperature);
    hum_temp.get_humidity(&humidity);
    press_temp.get_pressure(&pressure);
    
    printf("[T] %.2f C, [H]   %.2f%%, [P] %.2f mbar\r\n", temperature, humidity,pressure);
    wait(0.5);
    }
}