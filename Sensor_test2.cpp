#include "Sensor_test2.h"

int result(int sensorNumber) {
  return analogRead(sensorPins[sensorNumber]);
}
