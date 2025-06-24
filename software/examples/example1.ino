#include <Wire.h>
#include "DFRobot_BMM350.h"

#define SDA_PIN 6
#define SCL_PIN 7
#define I2C_ADDRESS 0x14  // Dirección detectada

DFRobot_BMM350_I2C bmm350(&Wire, I2C_ADDRESS);

void setup() {
  Serial.begin(115200);
  while (!Serial);

  Wire.begin(SDA_PIN, SCL_PIN);

  while (bmm350.begin()) {
    Serial.println("BMM350 init failed, retrying...");
    delay(1000);
  }
  Serial.println("BMM350 init success!");

  bmm350.setOperationMode(eBmm350NormalMode);
  bmm350.setPresetMode(BMM350_PRESETMODE_HIGHACCURACY);
  bmm350.setRate(BMM350_DATA_RATE_25HZ);
  bmm350.setMeasurementXYZ();
}

void loop() {
  sBmm350MagData_t magData = bmm350.getGeomagneticData();
  float compassDeg = bmm350.getCompassDegree();

  Serial.println("Geomagnetic Data [µT]");
  Serial.print("  X: "); Serial.println(magData.x);
  Serial.print("  Y: "); Serial.println(magData.y);
  Serial.print("  Z: "); Serial.println(magData.z);

  Serial.print("Compass Heading (°): ");
  Serial.println(compassDeg, 2);
  Serial.println("--------------------------------");
  delay(1000);
}
