# Microcontroller Performance Comparator
With this repository, developers, researchers, and hobbyists can easily compare and evaluate the performance of different microcontrollers for their specific applications. By providing a standardized benchmark suite, the repository simplifies the process of selecting the most suitable microcontroller based on performance requirements and constraints.

## Performance Comparison Table

Comparative performance of functions executed on STM32 and ATMEGA328. Comparisons in microseconds (us).

| Function              | STM32     | ATMEGA328 | STM32 performance gains   |
|-----------------------|-----------|-----------|-------------------------  |
| CPU Speed             | 72Mhz     | 16Mhz     | Has an additional 56Mhz   |
| digitalRead           | 0.595 us  | 4.918 us  | 4.323 us faster           |
| digitalWrite          | 0.770 us  | 4.543 us  | 3.773 us faster           |
| pinMode               | 1.780 us  | 4.353 us  | 2.573 us faster           |
| multiply byte         | 0.113 us  | 0.645 us  | 532 us faster             |
| divide byte           | 0.112 us  | 5.425 us  | 5.313 us faster           |
| add byte              | 0.102 us  | 0.455 us  | 353 us faster             |
| multiply integer      | 0.087 us  | 1.399 us  | 1.312 us faster           |
| divide integer        | 0.100 us  | 14.285 us | 14.185 us faster          |
| add integer           | 0.086 us  | 0.896 us  | 810 us faster             |
| multiply long         | 0.087 us  | 6.115 us  | 6.028 us faster           |
| divide long           | 0.100 us  | 38.675 us | 38.575 us faster          |
| add long              | 0.086 us  | 1.775 us  | 1.689 us faster           |
| multiply float        | 0.993 us  | 7.943 us  | 6.950 us faster           |
| divide float          | 6.975 us  | 80.150 us | 73.175 us faster          |
| add float             | 1.240 us  | 10.120 us | 8.880 us faster           |
| itoa                  | 1.620 us  | 12.970 us | 11.350 us faster          |
| dtostrf               | 93.350 us | 79.000 us | 14.350 us slower          |
| random                | 1.500 us  | 91.275 us | 89.775 us faster          |
| analogRead            | 6.900 us  | 112.000 us| 105.100 us faster         |
| analogWrite PWM       | 4.350 us  | 6.615 us  | 2.265 us faster           |
| delay(1)              | 1001.000 us| 1007.500 us| 6.500 us faster         |
| delay(100)            | 100000.000 us| 100000.000 us| Same execution time |
| delayMicroseconds(2)  | 2.043 us  | 0.770 us  | 1.273 us slower           |
| delayMicroseconds(5)  | 5.049 us  | 3.789 us  | 1.260 us slower           |
| delayMicroseconds(100)| 100.250 us| 99.350 us | 900 us slower             |
