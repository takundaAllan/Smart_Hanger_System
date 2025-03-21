# Smart Hanger System

The Smart Hanger System is an innovative solution designed to monitor inventory in real-time. This system uses an Arduino-based controller, a website interface, and LED indicators to help manage stock levels effectively. The system locks the hanger based on inventory status and uses LED lights to visually reflect whether stock levels are low or sufficient. Additionally, the system tracks trends of the most purchased products. 

When searching for a specific hanger, the system flashes the LEDs to draw attention, and it generates a QR code containing details of the product. This QR code can be scanned by customers to view product information directly on their phones.

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Overview

The Smart Hanger System integrates hardware and software to provide real-time inventory monitoring for retail stores or warehouses. It helps store owners manage their stock efficiently with the following functionalities:

- **Inventory Monitoring**: Tracks product stock levels.
- **LED Indicators**: Displays stock status using red (low stock) and green (sufficient stock) LEDs.
- **Hanger Locking System**: Automatically locks the hanger when stock is low, preventing items from being removed.
- **Trend Monitoring**: Displays trends of the most purchased products over time on the web interface.
- **LED Flashing**: The LEDs flash when searching for a specific hanger, helping users easily locate the item.
- **QR Code Generation**: When a specific hanger is searched, a QR code is generated containing product details. This QR code can be scanned by customers to view product information on their phones.

## Features

- **Real-Time Inventory Tracking**: Get live updates on product stock.
- **LED Indicators**: Visual status of stock levels with color-coded LEDs.
- **Hanger Lock Mechanism**: Prevents removal of items when stock is low.
- **Product Trends**: View and analyze the most purchased products.
- **LED Flashing**: Flashing LEDs to highlight specific hangers when searched.
- **QR Code Generation**: QR codes for detailed product information viewable by customers.
- **Web Interface**: Easy-to-use website to manage and monitor the system.

## Installation

### Prerequisites

- **Arduino IDE**: To program the Arduino board.
- **Arduino Board** (e.g., Arduino Uno or similar).
- **LEDs** and wiring components.
- **Servo Motor**: For the hanger lock mechanism.
- **Web Server**: To host the website (e.g., Node.js, Apache, or similar).
- **Database**: To store inventory and purchase data (e.g., MySQL or MongoDB).
- **QR Code Library**: A library for generating QR codes (e.g., `qrcode` for Node.js).

### Step-by-Step Installation

1. **Clone the repository**:
   ```bash
   git clone https://github.com/yourusername/smart-hanger-system.git
   cd smart-hanger-system
