// int pin = 9;
// int brightness = 255;

int readpin = A3;
float V2 ;
int readVal;
int wait = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(readpin, INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  // analogWrite(pin, brightness);

readVal = analogRead(readpin);

V2 = (5./1023.) * readVal;
Serial.println(V2);
delay(wait);

}
