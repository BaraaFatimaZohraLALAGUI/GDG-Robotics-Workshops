#include <Servo.h> 

int trigPin = 8;
int echoPin = 7;

float duration;
int distance;
Servo myServo;
int servopin = 3; 

void setup() {
  
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600);
  myServo.attach(servopin); 
}

void loop() {
  
  for(int i=15;i<=165;i++){ 

  myServo.write(i);
  delay(30);
  distance = calculateDistance();
  
  Serial.print(i); 
  Serial.print(","); 
  Serial.print(distance); 
  Serial.print("."); 
  }
  
  for(int i=165;i>15;i--){  
  myServo.write(i);
  delay(30);
  
  distance = calculateDistance();
  
  Serial.print(i);
  Serial.print(",");
  Serial.print(distance);
  Serial.print(".");
  }
}

float calculateDistance() { 
  
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); 
  distance= duration*0.034/2;
  return distance;
}

