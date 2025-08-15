/* 
        Button library example
3 push buttons connected from digital pins
2, 4, and 7. Pushing each button will increment
the counter variable by a different amount. Holding
each button will reset the counter to 0.

*/

#include <Arduino.h>
#include <Button.h>

Button button1(2);
Button button2(4, 50, 1500);
Button button3(7, 50, 1500);

int counter = 0;

void one() {
  counter++;
}

void two() {
  counter += 2;
}

void three() {
  counter += 3;
}

void reset() {
  counter = 0;
}

void setup() {
    Serial.begin(9600);

    button1.setDebounceTime(50);
    button1.setHoldTime(1500);

    button1.pressFunction(one);
    button1.holdFunction(reset);
    
    button2.pressFunction(two);
    button2.holdFunction(reset);
    
    button3.pressFunction(three);
    button3.holdFunction(reset);
}

void loop() {
    button1.handle();
    button2.handle();
    button3.handle();

    Serial.println(counter);
}