# MPU6050 Gyroscope Demo with Arduino

This project reads data from an MPU6050 (GY-521) sensor using an Arduino and prints **pitch**, **roll**, and **yaw** angles over the serial monitor.

## 📦 Features

- Reads and processes accelerometer and gyroscope data
- Calculates orientation in 3D space (pitch, roll, yaw)
- Uses the lightweight [MPU6050_light](https://github.com/rfetick/MPU6050_light) library
- Outputs data over Serial Monitor at 115200 baud

## 🔌 Wiring (for Arduino Uno)

| MPU6050 Pin | Arduino Pin |
|-------------|-------------|
| VCC         | 5V          |
| GND         | GND         |
| SDA         | A4          |
| SCL         | A5          |

> ⚠️ Some MPU6050 boards require 3.3V — check your model (GY-521 typically supports 5V)

## 📋 Libraries Used

- `MPU6050_light` by rfetick
- `Wire` (built-in)

Install libraries via **Arduino Library Manager** under **Sketch > Include Library > Manage Libraries…**

## 🧪 Example Serial Output

