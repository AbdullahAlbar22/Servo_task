# Servo_task
Humanoid Robot Servo Control
This project controls 4 servo motors for a humanoid robot. The servos run a sweep motion for 2 seconds, then hold at 90 degrees. It also includes an algorithm outline for basic walking motion.


Features:
– Controls 4 servo motors
– Executes sweep using Arduino Sweep example logic
– Holds all servos at 90 degrees after sweep
– Provides a simple walking motion plan

Walking Motion Algorithm:
1. Lift one leg using hip servo
2. Swing leg forward using knee servo
3. Place leg down
4. Shift weight to planted leg
5. Repeat with the other leg
6. Use arm servos for balance if needed

Requirements:
– Arduino board (e.g., Uno)
– 4 servo motors
– External power supply (recommended)
– Arduino IDE

Usage:
1. Connect 4 servos to Arduino PWM pins
2. Upload the code to Arduino
3. Power the system
4. Observe sweep for 2 seconds
5. All servos hold at 90 degrees

License:
This project is for educational use
