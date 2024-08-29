//Tech Trends Shameer
//Control LED Using Blynk 2.0/Blynk IOT

#define BLYNK_TEMPLATE_ID "TMPL3x_tBE9Yk"
#define BLYNK_TEMPLATE_NAME "MARIA HOME AUTOMATION"
#define BLYNK_AUTH_TOKEN "Bw3it-6S6ahVSMbld8-MMrwSol9eEK8q"




#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>  
#include <BlynkSimpleEsp8266.h>
 

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Moto";  // Enter your Wifi Username
char pass[] = "thomas123";  // Enter your Wifi password

int ledpin1 = 2;
int ledpin2 = 0;
int ledpin3 = 4;
int ledpin4 = 5;
void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
  pinMode(ledpin3,OUTPUT);
  pinMode(ledpin4,OUTPUT);
  digitalWrite(ledpin1,LOW);
  digitalWrite(ledpin2,LOW);
  digitalWrite(ledpin3,LOW);
  digitalWrite(ledpin4,LOW);
}

void loop()
{
  Blynk.run(); 
}
