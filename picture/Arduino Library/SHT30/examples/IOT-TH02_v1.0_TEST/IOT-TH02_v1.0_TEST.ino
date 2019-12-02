#include <WEMOS_SHT3X.h>

SHT3X sht30(0x44);
float temp=0;
float humi=0;
void setup() {

   Serial.begin(115200);
}

void loop() {

  if(sht30.get()==0){
   temp = sht30.cTemp;
   humi = sht30.humidity;
   Serial.print("Temperature: ");
   Serial.print(temp);
   Serial.print("℃");
   Serial.print("     Relative Humidity : ");
   Serial.print(humi);
   Serial.println("%RH");
/*  Serial.print("Temperature in Celsius : ");
    Serial.println(sht30.cTemp);
    Serial.print("Temperature in Fahrenheit : ");
    Serial.println(sht30.fTemp);
    Serial.print("Relative Humidity : ");
    Serial.println(sht30.humidity);
    Serial.println();
    */
  }
  else
  {
    Serial.println("Error!");
  }
  delay(2000);

}
