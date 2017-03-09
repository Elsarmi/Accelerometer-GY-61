#include <Arduino.h>
#ifndef GY_61_h
#define GY_61_h


class GY_61
{
public:
  GY_61();
  GY_61(uint8_t pinx, uint8_t piny, uint8_t pinz);
  float readx();
  float ready();
  float readz();
  float acceltol();
private:
  uint8_t pinx;
  uint8_t piny;
  uint8_t pinz;
  float xcal(float xread);
  float ycal(float yread);
  float zcal(float zread);
};

#endif
