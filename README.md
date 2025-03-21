# Smart Hanger System

The Smart Hanger System is an innovative solution designed to monitor inventory in real-time. This system uses an Arduino-based controller, a website interface, and LED indicators to help manage stock levels effectively. The system locks the hanger based on inventory status and uses LED lights to visually reflect whether stock levels are low or sufficient. Additionally, the system tracks trends of the most purchased products.

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

## Features

- **Real-Time Inventory Tracking**: Get live updates on product stock.
- **LED Indicators**: Visual status of stock levels with color-coded LEDs.
- **Hanger Lock Mechanism**: Prevents removal of items when stock is low.
- **Product Trends**: View and analyze the most purchased products.
- **Web Interface**: Easy-to-use website to manage and monitor the system.

## Installation

### Prerequisites

- **Arduino IDE**: To program the Arduino board.
- **Arduino Board** (e.g., Arduino Uno or similar).
- **LEDs** and wiring components.
- **Servo Motor**: For the hanger lock mechanism.
- **Web Server**: To host the website (e.g., Node.js, Apache, or similar).
- **Database**: To store inventory and purchase data (e.g., MySQL or MongoDB).

### Step-by-Step Installation

1. **Clone the repository**:
   ```bash
   git clone https://github.com/yourusername/smart-hanger-system.git
   cd smart-hanger-system
