# Real-Time Temperature & Humidity Monitor

## Overview
This project demonstrates a simple embedded system that reads temperature and humidity data from a DHT22 sensor using an Arduino Uno and displays the results on the serial monitor. It is designed as a beginner-friendly introduction to sensor interfacing, embedded C/C++ programming, and basic data communication.

## Features
- Real-time monitoring of temperature and humidity
- Sensor interfacing using the DHT22 digital sensor
- Data output via serial communication
- Easy simulation using the Wokwi online Arduino simulator

## Hardware and Tools
- **Microcontroller:** Arduino Uno
- **Sensor:** DHT22 Temperature & Humidity Sensor
- **Simulation Platform:** [Wokwi Arduino Simulator](https://wokwi.com/)
- **Programming Language:** C/C++ (Arduino framework)

## Circuit Diagram
Below is the connection diagram for the project:

- DHT22 VCC → Arduino 5V
- DHT22 GND → Arduino GND
- DHT22 Data → Arduino Digital Pin 2

![image](https://github.com/user-attachments/assets/75bcf84b-3e9c-438f-98ae-e58869c07140)


## How It Works
1. The Arduino initializes the DHT22 sensor and sets up serial communication.
2. Every 2 seconds, it reads the current temperature and humidity from the sensor.
3. The data is printed to the serial monitor for real-time observation.

## Getting Started

### 1. Clone or Download the Repository

### 2. Open in Wokwi or Arduino IDE
- Upload the provided `sketch.ino` file to your Arduino or open it in Wokwi for simulation.

### 3. Run the Simulation
- Click “Start Simulation” in Wokwi or upload the code to your Arduino board.
- Open the Serial Monitor to view live temperature and humidity readings.

## Code Snippet


## Applications
- Home automation and weather stations
- Environmental monitoring
- Learning and teaching embedded systems basics

## License
This project is licensed under the MIT License.
