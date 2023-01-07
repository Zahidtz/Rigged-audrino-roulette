# Rigged-audrino-roulette
This project is a roulette game using an Arduino, a breadboard, three LEDs (red, green, and blue), and a button. The roulette has a rigged 70% chance of landing on green, a 15% chance of landing on blue, and a 15% chance of landing on red. The Arduino code waits for the user to press the button, then generates a random number between 0 and 99. If statements are used to determine which LED to turn on based on the probability of landing on each color. The selected LED is then turned on for 1 second before being turned off. The roulette will then start again when the button is pressed again. This project is a fun and interactive way to learn about probability and random number generation with Arduino.




the format this goes on your bread board is:
              +5V
               |
               R
               |
          LED1 Red
               |
              GND
              
               |
          LED2 Green
               |
               R
               |
              +5V
              
               |
          LED3 Blue
               |
               R
               |
              GND
              
               |
          Button
               |
               R
               |
              GND
              
              
  In this diagram:

R represents the resistor.
LED1, LED2, and LED3 represent the red, green, and blue LEDs, respectively.
The anodes (long legs) of the LEDs are connected to the resistor, and the cathodes (short legs) are connected to GND.
The button is connected to a digital input pin on the Arduino, and the input pin is connected to GND through a 10k ohm resistor. This enables the pull-up resistor on the input pin, allowing it to detect the button press.
Make sure to use male-to-male jumper wires to connect the components to the breadboard and Arduino.


