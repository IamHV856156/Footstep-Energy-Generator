# Connections:
**Piezoelectric transducers**

* I used six 27mm Piezoelectric disks
* Connect all them in series
  
**Breadboard Connections**
* I used 400 point mini bread board
  
* So, now connect all components as described below

* Insert Diode at **e6(silver part here)** and **f6(black part here)** 
* Insert Diode at **g6(black part here)** and **g9(silver part here)** 
* Insert Diode at **d6(black part here)** and **d9(silver part here)** 
* Insert Diode at **e9(silver part here)** and **f9(black part here)**
* Insert a Hookup wire in **j6** and **j14**
* Insert a Hookup wire in **b9** and **b14**
* Insert Capacitors **Negative in g14** and **Positive in d14**
* Insert 100k ohm resistor in **a14** and **a19**
* Insert 10k ohm resistor in **b19** and **b23**
* Insert BC547 Transistors **Collector in a23** , **base in a24** and **emmiter in a25**
* Insert a Hookup wire in **e23** and **f23**
* Insert 10k ohm resistor in **e24** and **f24**
* Insert a Hookup wire in **i14** and **i23**
* Insert a Hookup wire in **j23** and **-ve(GND)** point
* Insert one terminal of Piezoelectric disks in **h9** point
* Insert another terminal of Piezoelectric disks in **b6** point

**Arduino Uno Connections**
* Insert one end of jumper wire in **c19** of breadboard and other end in **Analog pin A0** of Arduino
* Insert one end of jumper wire in **g24** of breadboard and other end in **Digital pin 8** of Arduino
* Insert one end of jumper wire in **Negative** line of breadboard and other end in **GND** of Arduino
* Insert one end of jumper wire in **Positive** line of breadboard and other end in **VIN** of Arduino

**I2c LCD Display Connections**
* Insert LCD **GND** to **Negative** line of breadboard
* Insert LCD **VCC** to **5V** of Arduino
* Insert LCD **SDA** to **Analog pin A4** of Arduino
* Insert LCD **SCL** to **Analog pin A5** of Arduino

**Battery Connections**
*Insert **+ve** of battry to **Positive** line of breadboard
*Insert **-ve** of battry to **Nagetive** line of breadboard

**LED Connections**
* Insert one end of LED to **c25(Emmiter of transistor)** of breadboard
* Insert another end of LED to **Positive** line of breadboard
