void TimeSet0() {

  const int ival = 8;


  Keyboard.write('t');
  delay(100);
  Keyboard.write('/');
  delay(ival);
  Keyboard.write('t');
  delay(ival);
  Keyboard.write('i');
  delay(ival);
  Keyboard.write('m');
  delay(ival);
  Keyboard.write('e');
  delay(ival);
  Keyboard.write(' ');
  delay(ival);
  Keyboard.write('s');
  delay(ival);
  Keyboard.write('e');
  delay(ival);
  Keyboard.write('t');
  delay(ival);
  Keyboard.write(' ');
  delay(ival);
  Keyboard.write('2');
  delay(ival);
  Keyboard.write('0');
  delay(ival);
  Keyboard.write('0');
  delay(ival);
  Keyboard.write('0');
  delay(ival);
  Keyboard.write(176);
}

void inventory() {
  const int ival2 = 25;
  Keyboard.press('m');
  delay(ival2);
  Keyboard.release('m');
  delay(ival2);
  Keyboard.press(KEY_DOWN_ARROW);
  delay(ival2);
  Keyboard.release(KEY_DOWN_ARROW);
  delay(ival2);
  Keyboard.press(KEY_DOWN_ARROW);
  delay(ival2);
  Keyboard.release(KEY_DOWN_ARROW);
  delay(ival2);
  Keyboard.press(176);
  delay(ival2);
  Keyboard.release(176);
  delay(ival2);
  Keyboard.press(KEY_DOWN_ARROW);
  delay(ival2);
  Keyboard.release(KEY_DOWN_ARROW);
  delay(ival2);
  Keyboard.press(KEY_DOWN_ARROW);
  delay(ival2);
  Keyboard.release(KEY_DOWN_ARROW);
  delay(ival2);
  Keyboard.press(176);
  delay(ival2);
  Keyboard.release(176);
  delay(ival2);
  Keyboard.press(176);
  delay(ival2);
  Keyboard.release(176);
  delay(ival2);



}
