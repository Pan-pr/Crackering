#include <Servo.h>
#include <AccelStepper.h>

Servo myServo1;
Servo myServo2;

//const int stepsPerRevolution = 2048; // 64 steps * 64 gear ratio

#define MotorInterfaceType 4

#define IN1 3
#define IN2 4
#define IN3 5
#define IN4 6

// Initialize the stepper library
//Stepper myStepper(stepsPerRevolution, 3, 4, 5, 6);

AccelStepper stepper(MotorInterfaceType, IN1, IN3, IN2, IN4);

const int buttonPin = 2;  // Button connected to digital pin 2
const int servoPin = 8;   // Servo control on pin 9
const int servoPinN = 7;
bool lastButtonState = HIGH;
long stepperTarget = 0;         // new variable at the top
const int stepIncrement = 512;  // steps per press

void setup() {

  pinMode(buttonPin, INPUT_PULLUP);  // Use internal pull-up resistor
  myServo1.attach(servoPin);
  myServo2.attach(servoPinN);
  myServo1.write(0);  // Initial position
  myServo2.write(0);
  //myStepper.setSpeed(15); // Speed in RPM

  stepper.setMaxSpeed(1000);     // Adjust to fit your needs
  stepper.setAcceleration(500);  // Smooth start/stop

  Serial.begin(9600);
}

void loop() {
  bool buttonState = digitalRead(buttonPin);

  if (buttonState == LOW && lastButtonState == HIGH) {
    //servo
    myServo1.write(90);
    delay(1500);
    myServo2.write(180);
    delay(1500);

    myServo2.write(0);
    delay(1500);

    myServo1.write(80);
    delay(100);
    myServo1.write(70);
    delay(100);
    myServo1.write(60);
    delay(100);
    myServo1.write(50);
    delay(100);
    myServo1.write(40);
    delay(100);
    myServo1.write(30);
    delay(100);
    myServo1.write(20);
    delay(100);
    myServo1.write(10);
    delay(100);
    myServo1.write(0);
    delay(100);

    //stepper
    stepperTarget += stepIncrement;
    stepper.moveTo(stepperTarget);
    stepper.runToPosition();
    delay(500);

    stepperTarget += stepIncrement;
    stepper.moveTo(stepperTarget);
    stepper.runToPosition();
    delay(500);

    stepperTarget += stepIncrement;
    stepper.moveTo(stepperTarget);
    stepper.runToPosition();
    delay(500);

    stepperTarget += stepIncrement;
    stepper.moveTo(stepperTarget);
    stepper.runToPosition();
    delay(500);

    stepperTarget += stepIncrement;
    stepper.moveTo(stepperTarget);
    stepper.runToPosition();
    delay(500);

    stepperTarget += stepIncrement;
    stepper.moveTo(stepperTarget);
    stepper.runToPosition();
    delay(500);
    
    myServo1.write(15);
    delay(100);
    myServo1.write(25);
    delay(100);
    myServo1.write(35);
    delay(100);
    myServo1.write(45);
    delay(100);
    myServo1.write(55);
    delay(100);
    myServo1.write(65);
    delay(100);
    myServo1.write(75);
    delay(100);
    myServo1.write(85);
    delay(100);
    myServo1.write(95);
    delay(100);
    myServo1.write(105);
    delay(100);
    myServo1.write(115);
    delay(100);
    myServo1.write(125);
    delay(100);
    myServo1.write(135);
    delay(100);
    myServo1.write(145);
    delay(100);
    myServo1.write(155);
    delay(100);
    myServo1.write(165);
    delay(100);
    myServo1.write(175);
    delay(100);
    myServo1.write(180);
    delay(100);

  }
}
