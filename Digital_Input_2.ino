/*
 Input Pullup Serial

 This example demonstrates the use of pinMode(INPUT_PULLUP). It reads a
 digital input on pin 2 and prints the results to the serial monitor.

 The circuit:
 * Momentary switch attached from pin 2 to ground
 * Built-in LED on pin 13

 Unlike pinMode(INPUT), there is no pull-down resistor necessary. An internal
 20K-ohm resistor is pulled to 5V. This configuration causes the input to
 read HIGH when the switch is open, and LOW when it is closed.

 created 14 March 2012
 by Scott Fitzgerald

 http://www.arduino.cc/en/Tutorial/InputPullupSerial

 This example code is in the public domain

 */

void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pin2 as an input and enable the internal pull-up resistor
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  
}

int buttonState1_1 = 0;
int lastButtonState1_1 = 0;
int buttonState1_2 = 0;
int lastButtonState1_2 = 0;
int buttonState1_3 = 0;
int lastButtonState1_3 = 0;
int buttonState1_4 = 0;
int lastButtonState1_4 = 0;
int buttonState1_5 = 0;
int lastButtonState1_5 = 0;
  
void loop() {
  //read the pushbutton value into a variable

  //digitalRead(2);
  //print out the value of the pushbutton
  //Serial.println(pressed);
  buttonState1_1 = digitalRead(2);
  buttonState1_2 = digitalRead(3);
  buttonState1_3 = digitalRead(4);
  buttonState1_4 = digitalRead(5);
  buttonState1_5 = digitalRead(6);
  // Keep in mind the pullup means the pushbutton's
  // logic is inverted. It goes HIGH when it's open,
  // and LOW when it's pressed. Turn on pin 13 when the
  // button's pressed, and off when it's not:
  if (buttonState1_1 == LOW) {
    Serial.println("Button1_1");
    digitalWrite(13, HIGH);
    delay(500);
  } 
  else digitalWrite(13, LOW);

  lastButtonState1_1 = buttonState1_1;

  if (buttonState1_2 == LOW) {
    Serial.println("Button1_2");
    digitalWrite(13, HIGH);
    delay(500);
  } 
  else digitalWrite(13, LOW);

  lastButtonState1_2 = buttonState1_2;

  if (buttonState1_3 == HIGH) {
    Serial.println("Button1_3");
    digitalWrite(13, HIGH);
    delay(500);
  } 
  else digitalWrite(13, LOW);

  lastButtonState1_3 = buttonState1_3;

  if (buttonState1_4 == HIGH) {
    Serial.println("Button1_4");
    digitalWrite(13, HIGH);
    delay(500);
  } 
  else digitalWrite(13, LOW);

  lastButtonState1_4 = buttonState1_4;

  if (buttonState1_5 == HIGH) {
    Serial.println("Button1_5");
    digitalWrite(13, HIGH);
    delay(500);
  } 
  else digitalWrite(13, LOW);

  lastButtonState1_5 = buttonState1_5;
}



