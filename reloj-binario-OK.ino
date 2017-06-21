// Date and time functions using a DS1307 RTC connected via I2C and Wire lib
#include <Wire.h>
#include "RTClib.h"

RTC_DS1307 rtc;

//led pins config
int H1 = 13,H2 = A0,h1 = 9,h2 = 10,h4 = 11,h8 = 12;
int M1 = 8;
int M2 = 7;
int M4 = 6;
int m1 = 2;
int m2 = 3;
int m4 = 4;
int m8 = 5;


void setup () {
    Serial.begin(57600);
    Wire.begin();
    rtc.begin();
    //segundero
    pinMode(A3, OUTPUT);
    digitalWrite(A3, LOW);
}

void loop () {
    DateTime now = rtc.now();  
    Serial.print(now.year(), DEC);
    Serial.print('/');
    Serial.print(now.month(), DEC);
    Serial.print('/');
    Serial.print(now.day(), DEC);
    Serial.print(" - ");
    Serial.print(now.hour(), DEC);
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.println();
    Serial.print(" BINARY ");
    Serial.println();   
    displayHours(now.hour());
    displayMinutes(now.minute());
    Serial.println(); 
    Serial.print("=================================================");
    Serial.println();
    Serial.println();
    segundero();  
    delay(500);
}
