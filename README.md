# Footstep-Energy-Generator

**Project Overview**

This project aims to harvest energy from footsteps using an Arduino Uno board. The system converts the mechanical energy of footsteps into electrical energy, which can be stored or used to power small devices.

**Components:**

* Arduino Uno board
* Piezoelectric transducers
* I2c Based LCD Display
* Diodes(1N4007)
* Resistors(used 3 resistores one of 100k ohm and 2 of 10k ohm)
* Capacitors(10uf)
* Transistor(BC547)
* Battery(18650 Li-Ion)
* Breadboard
* Jumper wires

**How It Works:**

1. **Energy Harvesting:** The piezoelectric transducers convert the mechanical energy of footsteps into electrical energy.
2. **Energy Storage:** The harvested energy can be stored in a battery for later use.
3. **Powering Devices:** The stored energy can power small devices like LEDs, sensors, or other low-power electronics.

**Code Structure:**

**main.ino:** The main Arduino sketch that controls the entire system, including reading sensor values, regulating voltage, and managing energy storage.

**Usage:**

1. **Hardware Setup:** Assemble the circuit as written in `Circuit.txt`.
2. **Code Upload:** Upload the `main.ino` sketch to the Arduino Uno board.
3. **Testing:** Place the device in a high-traffic area and observe the energy generation and storage.

**Future Improvements:**

* Increase efficiency of energy harvesting.
* Explore different energy storage solutions.
* Develop a more robust and durable design.

**License:**

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT).

**Contributing:**

Contributions to this project are welcome. Please feel free to fork the repository and submit pull requests.
