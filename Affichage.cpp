#include "sonde.h"
#include <Arduino.h>
#include "affichage.h" 
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

 void AFFICHAGE(){
            lcd.begin(16, 2);

        // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
 // lcd.print("hello, world!");
 // lcd.print();

  // print the number of seconds since reset:
 lcd.print(millis() / 1000);
                         
}
