# Hardware


<a href="#"><img src="resources/Schematics_icon.jpg?raw=false" width="500px"><br/> Schematics</a>

---

## PINOUT





## ⚙️ Technical Specifications

| Parameter                                      | Technical data                                                                                         |
|------------------------------------------------|--------------------------------------------------------------------------------------------------------|
| Package dimensions                             | 1.28 x 1.28 x 0.5 mm³ wafer level chip scale package (WLCSP)                                             |
| Operating range                                | -40 °C to 85 °C                                                                                        |
| Supply voltage                                 | VDDIO: 1.72 V … 3.6 V<br>VDD: 1.72 V … 1.98 V                                                           |
| Typical output noise rms                       | 3dB BW = ODR/2<br>± 190 nTrms (x,y axis) and ± 450 nT rms (z axis)                                       |
| Sensitivity Temperature Drift (typ.)           | ± -0.010 %/K                                                                                           |
| Average typical current consumption            | 200 µA @ 100 Hz in normal mode                                                                           |
| Magnetic field range, all axes                 | ± 2000 µT                                                                                              |
| Zero-field offset drift after soldering (typ.) | ± 25 µT                                                                                                |
| Sensitivity/gain error after soldering (typ.)    | ± 1 %                                                                                                  |
| Interface                                      | I2C and I3C                                                                                            |
| TCO error (typ.)                               | ± 200 nT/K                                                                                             |
| Maximum sampling rate                          | 400 Hz (normal mode)                                                                                   |

## 🔌 Pinout

![Pinout Diagram](docs/pinout.png)

| Pin Label | Function        | Notes                             |
|-----------|------------------|-----------------------------------|
| VCC       | Power Supply     | 3.3V or 5V                       |
| GND       | Ground           | Common ground for all components  |
| SDA       | I3C Data Line    | Connect to I3C data line         |
| SCL       | I3C Clock Line   | Connect to I3C clock line        |
| INT       | Interrupt        | Optional, for interrupt-driven operation |

