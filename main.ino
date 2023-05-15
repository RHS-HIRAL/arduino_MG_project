#include<OneWire.h>
#include<DallasTemperature.h>
#define ONE_WIRE_BUS 6 //OneWire is a library to connect many sensors to one pin
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

const int TPL = 13; // Trigger Pin Left/Right - TPL/TPR
const int TPR = 11;
const int EPL = 12; //Echo Pin Left/Right - EPL/EPR
const int EPR = 10;
const int LPL = 8; //LED Pin Left/Right - LPL/LPR
const int LPR = 7;
const int DISTANCE_THRESHOLD = 20; //Sensitivity in terms of distance of the ultrasonic sensors
int LED = 4; float tempC; //LED to check if the temperature is above certain temperature

float duration_usl, duration_usr, distance_cml, distance_cmr; //duration of ultrasonic sensor right/left and distance in cms of right/left

void setup() {
  Serial.begin(9600);

  //Left sensor pinmodes
  pinMode(TPL, OUTPUT);
  pinMode(EPL, INPUT);
  pinMode(LPL, OUTPUT);
  
  //Right sensor pinmodes
  pinMode(TPR, OUTPUT);
  pinMode(EPR, INPUT);
  pinMode(LPR, OUTPUT);
  
  //Temperature sensor pinmodes
  sensors.begin();
  pinMode(LED, OUTPUT);
}

void loop(){
  //Code to check left sensor reading
  digitalWrite(TPL, HIGH);
  delayMicroseconds(10);
  digitalWrite(TPL, LOW);
  duration_usl = pulseIn(EPL, HIGH);
  distance_cml = 0.017 * duration_usl; //Distance = Speed * Time //(0.034/2) is the speed for one way path
  if(distance_cml < DISTANCE_THRESHOLD){
    digitalWrite(LPL, HIGH);
    Serial.println("Distance of left side: ");
  	Serial.print(distance_cml);
  	Serial.println(" cm");
  }
  else{
    digitalWrite(LPL, LOW);
  }
  
  //Code to check right sensor reading
  digitalWrite(TPR, HIGH);
  delayMicroseconds(10);
  digitalWrite(TPR, LOW);
  duration_usr = pulseIn(EPR, HIGH);
  distance_cmr = 0.017 * duration_usr; //Distance = Speed * Time //(0.034/2) is the speed for one way path
  if(distance_cmr < DISTANCE_THRESHOLD){
    digitalWrite(LPR, HIGH);
    Serial.println("Distance of right side: ");
  	Serial.print(distance_cmr);
  	Serial.println(" cm");
  }
  else{
    digitalWrite(LPR, LOW);
  }

  //Code to check if the temperature is above the given temperature
  sensors.requestTemperatures();
  tempC = sensors.getTempCByIndex(0);
  Serial.print("Temperature in Celsius is: ");
  Serial.print(tempC);
  delay(1000);
  if(tempC>45){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED,LOW);
  }
}
