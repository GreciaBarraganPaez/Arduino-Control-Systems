# Arduino Sensor & Actuator Control

Three small educational embedded-systems projects using digital inputs, sensors, servomotors and LEDs, developed during applied robotics coursework.

## Projects

### Keypad-controlled servo and colored LEDs
`keypad-servo-led/keypad-servo-led.ino`

A 4×4 matrix keypad selects one of three LEDs or sets a servo to 10°, 90° or 170°. Keypad rows: pins 11, 10, 9, 8; columns: A0–A3. Servo signal: pin 4. LEDs: 2, 12, 3. Requires the **Servo** and **Keypad** libraries.

### PIR motion-triggered servo
`pir-servo/pir-servo.ino`

Motion detected by a PIR sensor on pin 3 commands a servo on pin 2 to move to 60°; otherwise it moves to 120°. Requires **Servo**.

### Ultrasonic parking-distance indicator
`ultrasonic-parking-sensor/ultrasonic-parking-sensor.ino`

Uses trigger pin 2 and echo pin A5 to estimate distance; pins 4 and 5 flash when the distance is less than 100 cm. Serial Monitor: 9600 baud (corrected from 9960 in the original sketch). This is not a safety-rated parking assistant.

## Running
1. Install the Arduino IDE.
2. Open an `.ino` file in its matching sketch folder.
3. Install the **Keypad** library through Arduino Library Manager when needed; the original third-party library copy is not republished.
4. Verify wiring, servo power requirements and a shared ground before connecting the hardware.
5. Select your board and port, then upload.

Hardware details and reproducible test results were not recorded with the source archives; the code has **not** been retested on physical hardware for this release.

## Skills
Arduino · C/C++ · Embedded Systems · Sensors · Actuators · Digital I/O
