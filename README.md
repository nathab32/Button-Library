
# Button Library for Arduino

## About

Simple button library for Arduino that enables easy momentary push button handling. Currently handles single presses and holds. The library eliminates the need for electronic debouncing by implementing a software debounce period that can be adjusted as needed. The hold time for each button can also be adjusted.

## Compatible buttons

![Button I tested with](https://m.media-amazon.com/images/I/51dYysS29xL._SL1500_.jpg)

The library should work with any momentary button. The image above is of the one that I specifically tested with. It is a standard 6mm x 6mm SPST momentary push button from Amazon.

## Example Schematic

![Example Schematic](https://raw.githubusercontent.com/nathab32/Button-Library/refs/heads/main/images/Screenshot%202025-08-15%20122958.png)

Each push button should be connected directly from its respective digital pin to ground. The library utilizes the Arduino's internal pullup resistors, so no additional components are necessary apart from the push buttons.

## Usage

1. Include the library using `#include <Button.h>`
2. Create a button object using the constructors defined in `src\Button.cpp`
3. Set debounce, hold time, and functions.
4. Call `handle()` for each button in the main loop.

See `examples\example.cpp` for further help.
