#include <Arduino.h>
#include "GY_61.h"
GY_61::GY_61(){

}

GY_61::GY_61(uint8_t pinx, uint8_t piny, uint8_t pinz){
 this->pinx = pinx;
 this->piny = piny;
 this->pinz = pinz;
};
//Aceleracion en X m/s2 (analogo)
float GY_61::readx(){
  float xread;
  xread = analogRead(this-> pinx);
  return xcal(xread);
};

float GY_61::ready(){
  float yread;
  yread = analogRead(this-> piny);
  return yread;
};

float GY_61::readz(){
  float zread;
  zread = analogRead(this-> pinz);
  return zread;
};

//privada
float GY_61::xcal(float xread){
  float xdata;
  xdata = (((float)xread - 337.92) / 61.44 * 9.81);
  return xdata;
}

float GY_61::ycal(float yread){
  float ydata;
  ydata = (((float)yread - 337.92) / 61.44 * 9.81);
  return ydata;
}

float GY_61::zcal(float zread){
  float zdata;
  zdata = (((float)zread - 337.92) / 61.44 * 9.81);
  return zdata;
}

float GY_61::acceltol(){
  float xdata, ydata, zdata;
  float acceltol;
  xdata = readx();
  ydata = ready();
  zdata = readz();
  acceltol = sqrt((xdata*xdata)+(ydata*ydata)+(zdata*zdata));
  return acceltol;
}
