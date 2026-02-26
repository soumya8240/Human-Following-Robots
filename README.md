# Human-Following Robots 🤖👥

An autonomous robotic system designed to detect and follow a human target using ultrasonic sensors and Arduino-based control.  
The system uses **distance sensors** and **motor controllers**, following a **modular embedded architecture**.

## 📌 Project Overview

- Autonomous human detection and tracking
- Uses ultrasonic sensors for distance measurement
- Variable speed based on target distance
- Obstacle avoidance capability
- Smooth acceleration control
- Emergency stop on communication failure
- Real-time sensor feedback processing

## 🧠 System Architecture

### High-Level Block Diagram

The system has integrated control:

- **Sensor Unit** – Detects human target using ultrasonic sensors
- **Control Unit** – Processes sensor data and drives motors
- **Motor Driver** – Manages DC motor speed and direction

## 🔍 Sensor Unit

- Arduino-based microcontroller
- Multiple ultrasonic sensors (HC-SR04)
- Real-time distance measurement
- Autonomous decision making

## 🚗 Robot Drive System

- Receives processed control signals
- DC motors with speed control
- Smooth acceleration and deceleration
- Emergency stop on obstacle detection

## 📁 Repository Structure

```
Human-Following-Robots/
├── Sensor_Unit/
│   └── Sensor_Unit.ino
├── Robot_Drive/
│   └── Robot_Drive.ino
├── ReadMe-Files/
│   ├── SystemDiagram.png
│   ├── RobotSetup.jpg
│   └── ComponentLayout.png
└── README.md
```

## ⚙️ Hardware Used

- Arduino UNO / Nano
- HC-SR04 Ultrasonic Sensor (x2-3)
- L298N / L293D Motor Driver
- DC Motors (Gear motors)
- Servo Motor (optional for pan/tilt)
- Power Bank / Battery
- Jumper Wires & Breadboard

## 🛡️ Safety Features

- Real-time distance monitoring
- Automatic obstacle avoidance
- Emergency stop mechanism
- Motor timeout protection
- Sensor validation

> Absence of valid sensor data is treated as a STOP command.

## 📄 Documentation

Detailed technical documentation available in the repository files.

## 👥 Contributors

- **Soumya Ray** – B.Tech AI & DS, Amrita Vishwa Vidyapeetham

## 🚀 Future Work

- Computer vision-based tracking
- Machine learning gesture recognition
- IoT integration
- Mobile app control
- Advanced obstacle mapping

⭐ **If you like this project, feel free to fork and extend it.**

## © Copyright

© 2025 **Soumya Ray**. All rights reserved.

This project is developed for **academic and educational purposes**.  
Permission is granted to use, modify, and distribute this work **with proper attribution** to the original author.

Commercial use or redistribution without explicit permission from the author is **not permitted**.
