// GDG Robotics Workshop: GDG in Morse code

int led = 13;
int beep = 1500;
int bob = 500;

// G = beep beep bob
// D = beep bob bob
// GDG = beep beep bob beep bob bob beep beep bob

void setup() {
  // put your setup code here, to run once:
  
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(beep);
  digitalWrite(led, LOW);
  delay(bob);

  digitalWrite(led, HIGH);
  delay(beep);
  digitalWrite(led, LOW);
  delay(bob);

  digitalWrite(led, HIGH);
  delay(bob);
  digitalWrite(led, LOW);
  delay(bob);

  digitalWrite(led, HIGH);
  delay(beep);
  digitalWrite(led, LOW);
  delay(bob);

  digitalWrite(led, HIGH);
  delay(bob);
  digitalWrite(led, LOW);
  delay(bob);

  digitalWrite(led, HIGH);
  delay(bob);
  digitalWrite(led, LOW);
  delay(bob);

  digitalWrite(led, HIGH);
  delay(beep);
  digitalWrite(led, LOW);
  delay(bob);

  digitalWrite(led, HIGH);
  delay(beep);
  digitalWrite(led, LOW);
  delay(bob);


}
