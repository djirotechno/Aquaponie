#include <Arduino.h>
#include "sonde.h"

#define  sensorTemperature A1  
#define  sensorD0 A2
#define  sensorPh A3



void TEMP(){
       
         int  Tmp=analogRead(sensorTemperature);  // Read and reverse the analogue input value from the pH sensor.
         int  TMP = map(Tmp, 0, 1023, 0, 80);   // Map the '0 to 1023' result to '0 to 14'.
               Serial.print("\t La temêrature de l'eau  = ");
              Serial.println(TMP);             // Print the result in the serial monitor.
              delay(1000);                    // Take 1 reading per second.
}



/*void DIGIT(){
       
         int  PH=analogRead(sensorPh);  // Read and reverse the analogue input value from the pH sensor.
         int  Phr = map(PH, 0, 1023, 0, 14);   // Map the '0 to 1023' result to '0 to 14'.
              Serial.println(Phr);             // Print the result in the serial monitor.
              delay(1000);                    // Take 1 reading per second.
}*/



void   PH(){
       
         int  PH=analogRead(sensorPh);  // Read and reverse the analogue input value from the pH sensor.
         int  Phr = map(PH, 0, 1023, 0, 14);   // Map the '0 to 1023' result to '0 to 14'.
              Serial.println(Phr);             // Print the result in the serial monitor.
              delay(1000);                    // Take 1 reading per second.
}
