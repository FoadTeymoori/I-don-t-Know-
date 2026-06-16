#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h> //کتابخانه
#include <Adafruit_SSD1306.h> // کتابخانه

Adafruit_SSD1306 display(-1); // ساخت یک آبجکت برای کتابخانه

void setup() {


pinMode(3 , OUTPUT);//سبز
pinMode( 2 , OUTPUT); //زرد
pinMode( 4, OUTPUT); //قرمز
pinMode(14 , OUTPUT); //بازر
pinMode(16 , OUTPUT); //لامپ
pinMode(17 , INPUT); //گاز
digitalWrite(18 , INPUT); //اتش
digitalWrite(19 , INPUT); //زلزله

digitalWrite( 3 , HIGH);
digitalWrite( 16 , HIGH);

  // آدرس دهی I2c
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  

  //پاک کردن حافظه بافر
  display.clearDisplay();

  // نمایش متن بر روی OLED
  display.setTextSize(1); // انتخاب سایز نمایش متن بین ۱ و ۲ انتخاب کنید
  display.setTextColor(WHITE); // انتخاب رنگ
  display.setCursor(0,0); // تعیین مکان نمای نمایش متن بر روی oled
  display.println("HI  :) ");// متن مورد نظر
  display.display();
  delay(2000);
  display.clearDisplay();

}

void loop() {
  /////////////////////////////////////////////////////////////////////اتش
  if (digitalRead(18) == LOW)  {

digitalWrite( 3 , LOW);
digitalWrite( 16 , LOW);


digitalWrite(4 , HIGH);
digitalWrite(14 , HIGH);
delay(500);
digitalWrite(14 , LOW);
digitalWrite(4 , LOW);
delay(500);


  // آدرس دهی I2c
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  

  //پاک کردن حافظه بافر
  display.clearDisplay();

  // نمایش متن بر روی OLED
  display.setTextSize(1); // انتخاب سایز نمایش متن بین ۱ و ۲ انتخاب کنید
  display.setTextColor(WHITE); // انتخاب رنگ
  display.setCursor(0,0); // تعیین مکان نمای نمایش متن بر روی oled
  display.println("Fire hazard");// متن مورد نظر
  display.display();
  delay(2);
  display.clearDisplay();



  }
  else{
    digitalWrite(16 , HIGH);
  }

/////////////////////////////////////////////////////////////////////////زلزله
 if (digitalRead(19) == HIGH)  {

digitalWrite( 3 , LOW);
digitalWrite( 16 , LOW);


digitalWrite(4 , HIGH);
digitalWrite(14 , HIGH);
delay(500);
digitalWrite(14 , LOW);
digitalWrite(4 , LOW);
delay(500);

  // آدرس دهی I2c
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  

  //پاک کردن حافظه بافر
  display.clearDisplay();

  // نمایش متن بر روی OLED
  display.setTextSize(1); // انتخاب سایز نمایش متن بین ۱ و ۲ انتخاب کنید
  display.setTextColor(WHITE); // انتخاب رنگ
  display.setCursor(0,0); // تعیین مکان نمای نمایش متن بر روی oled
  display.println("Earthquake risk");// متن مورد نظر
  display.display();
  delay(2);
  display.clearDisplay();


  }
  else{
   digitalWrite(16 , HIGH);
  }
//////////////////////////////////////////////////////////////////////////////گاز

  if (digitalRead(17) == LOW)  {

digitalWrite( 3 , LOW);
digitalWrite( 16 , LOW);


digitalWrite(4 , HIGH);
digitalWrite(14 , HIGH);
delay(500);
digitalWrite(14 , LOW);
digitalWrite(4 , LOW);
delay(500);

// آدرس دهی I2c
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  

  //پاک کردن حافظه بافر
  display.clearDisplay();

  // نمایش متن بر روی OLED
  display.setTextSize(1); // انتخاب سایز نمایش متن بین ۱ و ۲ انتخاب کنید
  display.setTextColor(WHITE); // انتخاب رنگ
  display.setCursor(0,0); // تعیین مکان نمای نمایش متن بر روی oled
  display.println("Risk of gas leakage");// متن مورد نظر
  display.display();
  delay(2);
  display.clearDisplay();



  }
  else{
  
  }
 digitalWrite(16 , HIGH);

}
