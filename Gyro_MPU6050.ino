#include <Wire.h>
#include <MPU6050_light.h>

MPU6050 mpu(Wire);

void setup() {
  Serial.begin(115200);
  Wire.begin();

  Serial.println("Initializing MPU6050...");

  byte status = mpu.begin();
  if (status != 0) {
    Serial.print("MPU6050 init failed with code: ");
    Serial.println(status);
    while (1) delay(10);
  }

  Serial.println("MPU6050 initialized!");
  delay(1000);
  mpu.calcOffsets();  // calibrate gyro
  Serial.println("Gyro calibrated.");
}

void loop() {
  mpu.update();

  Serial.print("Pitch: ");
  Serial.print(mpu.getAngleX());
  Serial.print("\tRoll: ");
  Serial.print(mpu.getAngleY());
  Serial.print("\tYaw: ");
  Serial.println(mpu.getAngleZ());

  delay(500);
}
