#GY-61 Arduino Lib

# What is a GY-61 chip?

An GY-61 is a 3 axis analog  accelerometer with low consumption of current, ideal for robots, cellphones or any eletronical device. The sensor has a full sensing range of +/-3g. This specs are better described by the ADXL335: [datasheet](http://www.analog.com/media/en/technical-documentation/data-sheets/ADXL335.pdf)

## Class Description
 chip_enable: unit8_t
 position: unit8_t(x, y & z)
 -----------------------------
 readx/y/z: float
 GY_61::GY_61(unit8_t pinx/y/z)
 GY_61::readx() & ready() & GY_61::readz()
 x/y/zcal(float): float
 acceltol(): float

## Atributes
* **chip_enable:** Stores the value of the pines used to connect the GY-61.
* **position:** That value read before will be store in three different pins for x, y and Z that will communicated analogy with the GY-61.

#### Methods
* **GY_61:** Constructor class, takes the value for the chip select pins for X, Y and Z axis and stores the value position.
* **readx/y/x:** Gets the analog lecture of the three different pins corresponding the 3 axis of the accelerometer and return a float number.
* **x/y/zcal:** Gets the float number from the read method to transform into G values.
* **acceltol:** Gets the G values of the three different axis and using the formula of the average acceleration it returns a the total acceleration as a float number.
