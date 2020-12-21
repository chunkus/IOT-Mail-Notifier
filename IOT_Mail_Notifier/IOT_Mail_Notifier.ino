/*************************************************************
credits: Blynk for library
 *************************************************************
Author: Tobi Adebari
This program demonstrates the use of the Blynk IOT
Cloud as well as sound, motion and vibration sensors 
in order to implement an IOT Mail Notifying Device that 
is capable of notifying the user through push notifications
when a parcel or mail has come through their letterbox.
 *************************************************************/
 
#include <SPI.h> // Serial Port Library
#include <WiFiNINA.h> // WIFI Librry used for the integrated Wifi Module
#include <BlynkSimpleWiFiNINA.h> // API for WIFI communication between Arduino and Blynik server

// Blynk Device Authorisation Token
char auth[] = "_RXFOWRl9qEi0eyoJgJPFJvL9vrgHhOu";

// Users WiFi credentials including SSID and Passcode.
char ssid[] = "BTHub4-Z5J7 2.4Ghz";char pass[] = "c48c9b2826";

BlynkTimer timer;

void sendSensor()// Sensor data to be sent to the cloud server
{
/***********************
LED Pinout Configuration
************************/
  int vibLED = 11;
  int micLED = 12;
  int obstAvdLED = 13;
  pinMode(vibLED,OUTPUT); 
  pinMode(obstAvdLED, OUTPUT);
  pinMode(micLED, OUTPUT);
  
/***********************
Sensor Pinout Configuration
************************/
  int vib_pin=7;
  int obstAvdPin = 4;
  int micPin = 8;
  int is_mail_counter = 0;
  pinMode(vib_pin,INPUT);
  pinMode(obstAvdPin, INPUT); 
  pinMode(micPin,INPUT);
  
/***********************
Vibration Sensor
************************/
  int vibStat; // Status variable for use in the condition check
  vibStat=digitalRead(vib_pin); // Status variable will be assigned a value of the sensor pin to read
 
  // When the vibration detection module detects a vibration, LED turns on
  if(vibStat==HIGH)
  {
    Serial.println("Detected A Vibration");
    digitalWrite(vibLED, HIGH);
    Blynk.virtualWrite(V5,HIGH);
  }
  // Else the LED stays off
   else
  {
    Serial.println("No Vibration");
    digitalWrite(vibLED, LOW);
    Blynk.virtualWrite(V5,LOW); // Send data to virtual display in Blynk application
  };
    
/***********************
Obstacle Avoidance Sensor
//************************/    
  int obstAvdStat;
  obstAvdStat = digitalRead(obstAvdPin);
  
  // When the movement detection module detects an obstruction, LED turns on
  if (obstAvdStat == LOW)
  {
    Serial.println("Object Obstruction!!!");
    digitalWrite(obstAvdLED, HIGH);
    Blynk.virtualWrite(V7,HIGH);
  }
  // Else the LED stays off
  else
  {
    Serial.println("No Object");
    digitalWrite(obstAvdLED, LOW);
    Blynk.virtualWrite(V7,LOW); // Send data to virtual display in Blynk application
  }

/***********************
Sound Detection Sensor
//************************/  
  int micStat;
  micStat = digitalRead(micPin);
  
  // When the sound detection module detects a sound, LED flashes on
  if (micStat == HIGH) 
  {
    digitalWrite (micLED, HIGH);
    Serial.println("Sound Detected");
    Blynk.virtualWrite(V8,HIGH);
  }
  // Else the LED stays off
  else
  {
    digitalWrite (micLED, LOW);
    Serial.println("No Sound");
    Blynk.virtualWrite(V8,LOW); // Send data to virtual display in Blynk application
  };
  
/****************************************************
Condition Check for mail notifiation to be sent out
When all the sensors detect a change
//***************************************************/  
  if (vibStat == HIGH && obstAvdStat == LOW && micStat == HIGH)
  {
   Serial.println("API call for Notification Pushed Completed Sucsessfully"); //Output to serial monitor when condition passed and notification is sent.
   Blynk.notify("A Letter or Parcel has arrived!"); //Blynk API call for NOTIFICATION pushing
  }
}

void setup()
{
  Serial.begin(9600); // Debug console

  Blynk.begin(auth, ssid, pass); //Connection setup

  timer.setInterval(0L, sendSensor); //Timer setup
  
  // User can also specify a server such as a local server using the lines of code below:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
}

void loop()
{
  Blynk.run(); //main Blynk code to be run
  timer.run(); //timer to allow for the data to be sent continuously
}
