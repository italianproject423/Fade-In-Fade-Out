# Fade-In-Fade-Out

Arduino sketch that fades an LED on pin 11 up and down in a smooth breathing pattern. Built as a beginner project to practice PWM, variables manipulation, and conditional if-else logic.

## How it works
The sketch continuously changes the brightness of the LED by adding a velocity value at each loop cycle:

* **Fade In:** Brightness increases until it hits 255.
* **Direction Flip:** Velocity becomes negative to fade out.
* **Fade Out:** Brightness decreases until it hits 0.
* **Direction Flip:** Velocity becomes positive to fade in.

*Note: The code strictly clamps values at 0 and 255 to prevent glitches.*

## Hardware required
* Arduino Uno
* 1x LED
* 1x Resistor 220Ω
* Breadboard + jumper wires

## Variables
* `pin`: 11 (PWM pin used for the LED)
* `Brightness`: 0 (starting brightness value, 0-255)
* `fadevelocity`: 2 (speed and direction step of the fading effect)
* `delay`: 30ms (pause between cycles to make the transition smooth)

## License
MIT License © 2026 Damian
