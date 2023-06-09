# Arduino Project
   The project is IoT based. It consists of many components including Ultrasonic Sensors, DS18B20 (Temperature Sensor), LEDs and most importantly Arduino Uno board.

   This project is about measuring distance using Ultrasonic Sensor and turning on an LED if object is closer than the defined distance. We have used 2 distance measuring sensors as of right and left. We have also placed a Temperature sensor in the middle of both the distance measing sensors.

   It is a compulsion to download and install 2 particular libraries to run the code. Namely, 'OneWire' by Piotr Stolarz and 'DallasTemperature' by Miles Burton.

## ✪ Description of Components :

### Arduino Uno :  

![arduino](https://user-images.githubusercontent.com/96485370/236083852-df4a2ec4-0365-4751-86a2-b6d884ab65b0.png)


Arduino is an open-source electronics platform designed to simplify the process of creating interactive projects. It consists of a programmable microcontroller board, a development environment for writing and uploading code, and a community of users who share their ideas and projects. With Arduino, you can create a wide range of electronic devices, from simple robots and LED displays to complex home automation systems and interactive installations. It is widely used by hobbyists, students, and professionals in various fields, such as engineering, art, and design. The platform is known for its ease of use, flexibility, and affordability, making it accessible to anyone with a desire to learn and create.

### Bread Board : 


![breadboard](https://user-images.githubusercontent.com/96485370/236084291-cb4278ca-802b-455b-bfb8-f43a0bb3b0ed.jpg)

A breadboard is a plastic board with a grid of small holes that allows electronic components to be easily inserted and connected together without the need for soldering. It is used for creating and testing electronic circuits, and is an essential tool for electronics prototyping, experimentation, and education.


### Resistors : 


![resistors](https://user-images.githubusercontent.com/96485370/236084367-e6b318ea-11f0-4613-bd05-ce493fbab873.jpg)

A resistor is an electronic component that resists the flow of electrical current in a circuit. It is designed to limit the amount of current that passes through a circuit by providing a specific amount of resistance. Resistors are commonly used in electronic circuits to control the voltage levels, current flow, and power dissipation, and are available in a wide range of values, sizes, and power ratings.


### LED : 

![led](https://user-images.githubusercontent.com/96485370/233784206-2a02aa88-adb7-4c07-b27e-1b49fc524fdc.png)

LED (Light Emitting Diode) sensors are electronic devices that emit light when a current passes through them in a forward direction. They are commonly used in electronic displays, indicators, and lighting systems. LED sensors are low-cost, energy-efficient, and available in a wide range of colors, making them a popular choice for a variety of applications. They are often used in combination with other sensors, such as PIR and LDR sensors, to create smart lighting and automation systems.



### HC-SR04 ultra sonic sensor : 


![HC-SR04](https://user-images.githubusercontent.com/96485370/233784286-6a0116a1-b474-475f-8677-9b8d2967c23a.png)

The HC-SR04 is an ultrasonic sensor that uses sound waves to measure distance. It is commonly used in robotics, automation, and security systems to detect the presence of objects and obstacles in its path. The sensor emits high frequency sound waves and measures the time it takes for the sound to bounce back, allowing it to calculate the distance to the object with high accuracy.


### DS18B20 TEMPERATURE SENSOR :

![image](https://github.com/RHS-HIRAL/arduino_MG_project/assets/94632542/efd68d71-314b-4083-9101-19cd9ec55aa9)

The DS18B20 TEMPERATURE SENSOR is a low voltage, precision temperature sensor that provides an analog output proportional to the ambient temperature. It is commonly used in electronic circuits to monitor temperature and control heating or cooling systems, as well as in environmental monitoring applications. The sensor has a wide temperature range and high accuracy, making it a popular choice for hobbyists and professionals alike.


<!--

# Basic Circuit construction and programs 

## A. LED

### 1. LED Bilnk

![Led Blink Schematic view](https://user-images.githubusercontent.com/96485370/236088530-7879c61f-ad54-4ddf-9768-8b36005229fe.png)

![1  LED Blink](https://user-images.githubusercontent.com/96485370/236088650-3b02597c-f123-430b-84a5-a05daa06fff9.png)



### 2. Potentiometer LED intensity
![Potentiometer LED Intensity Schematic View](https://user-images.githubusercontent.com/96485370/236089082-7ad18883-6393-4ee1-9d22-c0d90069da14.png)

![Potentiometer LED Intensity](https://user-images.githubusercontent.com/96485370/236089121-2ecf8aa6-70ec-4b8c-9565-9ef8796eeb56.png)


### 3. Traffic Light

![Traffic Light Schematic View](https://user-images.githubusercontent.com/96485370/236089407-61b23274-6f67-446a-8870-88d4dfd76cc6.png)

![Traffic Light](https://user-images.githubusercontent.com/96485370/236089455-47b87c6f-d107-4036-9421-295f559ccc48.png)


### 4. Blink LED with Push Button

![Blink Led With Push Button Schematic View](https://user-images.githubusercontent.com/96485370/236089754-74a6ae9b-a45d-4685-b309-53824b8f13cd.png)

![Blink LED with push button](https://user-images.githubusercontent.com/96485370/236089800-a10030b2-5061-4a5a-9509-62878fdea9d0.png)


## B. Ultrasonic Sensor 

### 1. Distance measuring using ultrasonic sensor

![Distance measuring using ultrasonic sensor Schematic View](https://user-images.githubusercontent.com/96485370/236090120-a554332a-7d7d-44a8-b24a-9116a8f13114.png)

![Distance measuring using ultrasonic sensor](https://user-images.githubusercontent.com/96485370/236090180-67faf0a7-b238-4d8d-9008-8840218172df.png)


## C. Servo Motor

### 1. Run Servo Motor

![Servo Motor Schematic View](https://user-images.githubusercontent.com/96485370/236090471-f2e37348-e222-4818-a324-8d64c59ff984.png)

![Servo Motor](https://user-images.githubusercontent.com/96485370/236090478-6a0a832d-f28d-4823-b980-fad6d2742c18.png)



### 2. Temperature Sensor With Servo Motor

![Temperature Sensor with Servo Motor Schematic view](https://user-images.githubusercontent.com/96485370/236090556-d81222b1-106f-476a-9eda-27d182725f79.png)


![Temperature Sensor with Servo Motor](https://user-images.githubusercontent.com/96485370/236090565-798a29d2-2fbd-42fd-9ebd-307d3d108cba.png)

## D. Heat Sensor

### 1. Fire Alarm Using Heat Sensor

![Heat Sensor Shematic View](https://user-images.githubusercontent.com/96485370/236091062-53fad95c-3698-45c5-914e-c717fe1412fc.png)



![Fire Alarm Using Heat Sensor](https://user-images.githubusercontent.com/96485370/236091086-b6fc395d-c53c-4b5e-862f-aba93ef051ad.png)


## E. Theft Alarm

![Theft Alarm Schematic View](https://user-images.githubusercontent.com/96485370/236091149-1cbdee42-f068-4ce0-b1bf-1cb84e5c2d40.png)


![Theft Alarm](https://user-images.githubusercontent.com/96485370/236091166-2c5f240f-8dae-47b2-b510-20401d84d71c.png)







