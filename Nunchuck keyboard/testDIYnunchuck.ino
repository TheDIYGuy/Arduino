#include "Keyboard.h"

const int Ypin = A3;
const int Xpin = A2;
const int buttonPinC = 5;     // the number of the pushbutton pin
const int buttonPinZ = 4;

const int buttonPin1 = 6;
const int buttonPin2 = 7;
const int buttonPin3 = 8;
const int buttonPin4 = 9;


const int ledPinR =  17;      // the number of the LED pin
const int ledPinT =  30;      // the number ofSASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASASA the LED pin


int previousButtonStateZ = HIGH;
int previousButtonStateC = HIGH;

int previousButtonState1 = HIGH;
int previousButtonState2 = HIGH;
int previousButtonState3 = HIGH;
int previousButtonState4 = HIGH;

void setup() {
 Serial.begin(9600);
 Keyboard.begin();
 pinMode(ledPinR, OUTPUT);
  pinMode(ledPinT, OUTPUT);
  pinMode(ledPinR, OUTPUT);
  pinMode(ledPinT, OUTPUT);
  digitalWrite(buttonPinC, HIGH);
  digitalWrite(buttonPinZ, HIGH);
  digitalWrite(buttonPin1, HIGH);
  digitalWrite(buttonPin2, HIGH);
  digitalWrite(buttonPin3, HIGH);
  digitalWrite(buttonPin4, HIGH);

}
 
void loop() {
  int xValue = analogRead(Xpin);
  int yValue = analogRead(Ypin);
  int buttonStateZ = digitalRead(buttonPinZ);
  int buttonStateC = digitalRead(buttonPinC);

  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);
  int buttonState3 = digitalRead(buttonPin3);
  int buttonState4 = digitalRead(buttonPin4);
  
 if ((buttonStateC != previousButtonStateC)&& (buttonStateC == LOW)) { Keyboard.press(KEY_LEFT_SHIFT);}
 if ((buttonStateC != previousButtonStateC)&& (buttonStateC == HIGH)) { Keyboard.release(KEY_LEFT_SHIFT);}
 if ((buttonStateZ != previousButtonStateZ) && (buttonStateZ == LOW)) {Keyboard.press(' ');}
 if ((buttonStateZ != previousButtonStateZ) && (buttonStateZ == HIGH)) {Keyboard.release(' ');}

 if ((buttonState1 != previousButtonState1)&& (buttonState1 == LOW)) { Keyboard.press('q');}
 if ((buttonState1 != previousButtonState1)&& (buttonState1 == HIGH)) {Keyboard.release('q');}
 if ((buttonState2 != previousButtonState2) && (buttonState2 == LOW)) {Keyboard.press(KEY_LEFT_CTRL);}
 if ((buttonState2 != previousButtonState2) && (buttonState2 == HIGH)) {Keyboard.release(KEY_LEFT_CTRL);}
 if ((buttonState3 != previousButtonState3)&& (buttonState3 == LOW)) {TimeSet0(); }
 //if ((buttonState3 != previousButtonState3)&& (buttonState3 == HIGH)) { Keyboard.release(KEY_LEFT_CTRL);Keyboard.release(KEY_LEFT_SHIFT);}
 if ((buttonState4 != previousButtonState4) && (buttonState4 == LOW)) {Keyboard.press('e');}
 if ((buttonState4 != previousButtonState4) && (buttonState4 == HIGH)) {Keyboard.release('e');}
   
if(xValue > 550){
Keyboard.press('d');
}
if(xValue > 450 & xValue <550){
Keyboard.release('d');
Keyboard.release('a');
}
if(xValue < 450 ){
Keyboard.press('a');
}
if(yValue > 550){
Keyboard.press('w');
}
if(yValue > 450 & yValue <550){
Keyboard.release('w');
Keyboard.release('s');
}
if(yValue < 450 ){
Keyboard.press('s');
}


previousButtonStateC = buttonStateC;
previousButtonStateZ = buttonStateZ;

previousButtonState1 = buttonState1;
previousButtonState2 = buttonState2;
previousButtonState3 = buttonState3;
previousButtonState4 = buttonState4;
  Serial.print("xValue: ");
  Serial.print(xValue);
  Serial.print("yValue: ");
  Serial.println(yValue);

}
