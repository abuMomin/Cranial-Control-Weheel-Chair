# CRANIAL CONTROL WHEELCHAIR – Smart Mobility for Disabled Individuals

## Project Overview

**Cranial Control Wheelchair** is a smart, voice, and neck-movement controlled wheelchair designed to provide mobility solutions for physically challenged individuals. The system is cost-efficient, eco-friendly, and aims to empower users by enabling hands-free navigation.

## Tech Stack

- **Hardware:** Arduino Uno, HC-05 Bluetooth, MPU-6050 Gyroscope, MAX9814 Microphone, 12V Motor, Actuators
- **Software:** C Programming
- **Connectivity:** Bluetooth-based wireless control

## Features

- **Neck-Movement Control:** The wheelchair moves based on head movement using an MPU-6050 gyroscope sensor.
- **Voice Control:** MAX9814 microphone allows basic voice commands for movement.
- **Wireless Connectivity:** HC-05 Bluetooth module enables seamless communication between the headband (transmitter) and the wheelchair (receiver).
- **Affordable & Efficient:** Developed at a fraction of the cost of commercial electronic wheelchairs ($100 vs. $1900+).
- **Eco-Friendly Design:** Lightweight materials with future scope for solar charging integration.

## System Architecture

1. **Transmitter Segment:**

   - Worn on the user’s head, detects movement using the MPU-6050 sensor.
   - Processes motion data via Arduino Nano and transmits commands using Bluetooth.
   - Powered by a 9V DC battery.

2. **Receiver Segment:**
   - Mounted on the wheelchair, receives signals from the transmitter.
   - Arduino processes commands and controls motors via a motor driver.
   - Powered by a 12V Li-Po battery.

## Documentation & Media

- **Project Documentation:** Full project details are available in the documentation.
- **Presentation Slides & Prototype Images:** Included in the repository.
- **Industrial Implementation Video:** [Watch here](https://drive.google.com/drive/folders/1uFIFVcytHTXVtnpRQAMf9M2WINwRd7_p?usp=drive_link)

## Future Enhancements

- **Obstacle Detection:** Integrate sonar sensors for improved safety.
- **Portable Design:** Enhance mobility and foldability for easy transport.
- **Solar Charging:** Implement solar-powered battery charging.
- **Camera Integration:** Additional vision-based features for enhanced navigation.

## Installation & Setup

1. Clone the repository:
   ```sh
   git clone https://github.com/your-repo/cranial-wheelchair.git
   cd cranial-wheelchair
   ```
2. Set up the Arduino environment and install necessary libraries.
3. Upload the transmitter and receiver code to respective Arduino modules.
4. Assemble hardware components as per system design.

## Contributors

We welcome contributions! Please submit a pull request or open an issue for improvements.
