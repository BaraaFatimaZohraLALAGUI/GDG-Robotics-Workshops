#include <Keypad.h>
// #include <LiquidCrystal_I2C.h>

const byte columns = 3;
const byte rows = 3;

byte rowPins[rows] = {A2, 4, 5};
byte columnPins[columns] = {A3, A4, A5};

char keys[rows][columns] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
};

Keypad theKeypad = Keypad(makeKeymap(keys), rowPins, columnPins, rows, columns); 
// LiquidCrystal_I2C screen = LiquidCrystal_I2C(0x27, 16, 2);


int blueLED = 2;
int yellowLED = 1;
int redLED = 0;

void setup() {
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);

  Serial.begin(9600);

  // screen.begin(16, 2);
  // screen.backlight();

}

void loop() {
  Serial.println("Waiting for button press...");
  digitalWrite(blueLED, HIGH);
  char keyPress = '\0'; // Initialize to null character
  while (!keyPress) {
    keyPress = theKeypad.getKey(); // Continuously check for a key press
  }

  // A key was pressed
  Serial.print("Button pressed: ");
  Serial.println(keyPress);
}

