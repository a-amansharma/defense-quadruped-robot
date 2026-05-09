#include <Servo.h>

// ===== Servo Objects =====
Servo frontLeftHip;
Servo frontLeftKnee;

Servo frontRightHip;
Servo frontRightKnee;

Servo backLeftHip;
Servo backLeftKnee;

Servo backRightHip;
Servo backRightKnee;

// ===== Servo Pins =====
const int FL_HIP = 2;
const int FL_KNEE = 3;

const int FR_HIP = 4;
const int FR_KNEE = 5;

const int BL_HIP = 6;
const int BL_KNEE = 7;

const int BR_HIP = 8;
const int BR_KNEE = 9;

// ===== Initial Position =====
int neutralHip = 90;
int neutralKnee = 90;

void setup() {

  // Attach all servos
  frontLeftHip.attach(FL_HIP);
  frontLeftKnee.attach(FL_KNEE);

  frontRightHip.attach(FR_HIP);
  frontRightKnee.attach(FR_KNEE);

  backLeftHip.attach(BL_HIP);
  backLeftKnee.attach(BL_KNEE);

  backRightHip.attach(BR_HIP);
  backRightKnee.attach(BR_KNEE);

  standPosition();

  delay(1000);
}

void loop() {

  moveForward();
  delay(1000);

  moveBackward();
  delay(1000);

  turnLeft();
  delay(1000);

  turnRight();
  delay(1000);
}

// ==========================
// Standing Position
// ==========================
void standPosition() {

  frontLeftHip.write(neutralHip);
  frontLeftKnee.write(neutralKnee);

  frontRightHip.write(neutralHip);
  frontRightKnee.write(neutralKnee);

  backLeftHip.write(neutralHip);
  backLeftKnee.write(neutralKnee);

  backRightHip.write(neutralHip);
  backRightKnee.write(neutralKnee);
}

// ==========================
// Move Forward
// ==========================
void moveForward() {

  frontLeftHip.write(70);
  backRightHip.write(70);

  frontRightHip.write(110);
  backLeftHip.write(110);

  delay(300);

  standPosition();

  delay(300);
}

// ==========================
// Move Backward
// ==========================
void moveBackward() {

  frontLeftHip.write(110);
  backRightHip.write(110);

  frontRightHip.write(70);
  backLeftHip.write(70);

  delay(300);

  standPosition();

  delay(300);
}

// ==========================
// Turn Left
// ==========================
void turnLeft() {

  frontLeftHip.write(70);
  backLeftHip.write(70);

  frontRightHip.write(70);
  backRightHip.write(70);

  delay(300);

  standPosition();
}

// ==========================
// Turn Right
// ==========================
void turnRight() {

  frontLeftHip.write(110);
  backLeftHip.write(110);

  frontRightHip.write(110);
  backRightHip.write(110);

  delay(300);

  standPosition();
}