
#include <GY_61.h>

GY_61 accel;

void setup() {
    accel = GY_61(A0, A1, A2);
    Serial.begin(9600);
}
void loop() {
  Serial.print("X = ");
  Serial.println(accel.readx());
  Serial.print(" Y = ");
  Serial.println(accel.ready());
  Serial.print(" Z = ");
  Serial.println(accel.readz());
  Serial.print(" Ac. Total");
  Serial.println(accel.acceltol());
}
