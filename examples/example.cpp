/* 
        Button library example
3 push buttons connected from digital pins
2, 4, and 7. Pushing each button will add to the 
counter by 1, 2, and 3, respectively. Holding
each button will subtract instead of add.

*/

#include <Arduino.h>
#include <Button.h>

Button button1(2);
Button button2(4, 50, 1500);
Button button3(7, 50, 1500);

int counter = 0;

void onePress() {
  counter++;
}

void twoPress() {
  counter += 2;
}

void threePress() {
  counter += 3;
}

void oneHold() {
  counter--;
}

void twoHold() {
  counter -= 2;
}

void threeHold() {
  counter -= 3;
}

void setup() {
    Serial.begin(9600);

    button1.setDebounceTime(50);
    button1.setHoldTime(1500);

    button1.pressFunction(onePress);
    button1.holdFunction(oneHold);
    
    button2.pressFunction(twoPress);
    button2.holdFunction(twoHold);
    
    button3.pressFunction(threePress);
    button3.holdFunction(threeHold);
}

void loop() {
    button1.handle();
    button2.handle();
    button3.handle();

    Serial.println(counter);
}