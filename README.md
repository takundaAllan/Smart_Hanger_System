# Smart Hanger System

The Smart Hanger System is an innovative solution designed to monitor inventory in real-time. This system uses an Arduino-based controller, a website interface, and LED indicators to help manage stock levels effectively. The system locks the hanger based on inventory status and uses LED lights to visually reflect whether stock levels are low or sufficient. Additionally, the system tracks trends of the most purchased products. 

When searching for a specific hanger, the system flashes the LEDs to draw attention, and it generates a QR code containing details of the product. This QR code can be scanned by customers to view product information directly on their phones.

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)

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

- **Arduino IDE**: To upload the code to the ESP32 chip.
- **ESP32 Chip**: The microcontroller that will control the Smart Hanger System.
- **Green and Red LED Lights**: To indicate inventory status (green for sufficient stock, red for low stock).
- **Servo Motor**: For locking and unlocking the hanger.
- **Web Server**: To host the website ( Apache).
- **Database**: To store inventory and purchase data ( MySQL).
- **Resistors**: For controlling the current to the LEDs.
- **Jumper Wires**: To connect the components together.
- **Wi-Fi Connection**: The ESP32 will connect to the same Wi-Fi network as the web server to communicate with the system.

  ## Usage

### 1. **Monitor Inventory**

Once the system is set up, you can monitor the stock levels of all products via the web interface.

- **LED Indicators**: The LEDs will show a green light for products with sufficient stock and a red light for products with low stock. 
  
- **Real-Time Updates**: The system will automatically update stock levels in real-time based on purchase data and any manual adjustments made via the web interface.

### 2. **Track Product Trends**

The web interface provides an overview of the most purchased products. You can view this information through a graph or a list that shows which products are being purchased the most over time.

- **Product Trends Visualization**: A chart will be displayed showing the trend of product sales, helping you identify popular items.
  
- **Analysis**: Use this data to make better stock decisions and plan for reordering.

### 3. **Locking Mechanism**


The system allows you to lock or unlock a hanger through the **Employee Page**. This is particularly useful when a customer wants to try or purchase a product.

- **Employee Page**: Store employees can log into a special employee interface to manage hanger locks and unlocks. The page allows you to:
  - Unlock the hanger when a customer wants to try or purchase the product.
  - Lock the hanger when the product is no longer available or is removed from the hanger.
  

- **Manual Control**: Employees can manually lock or unlock the hanger via the Employee Page, allowing flexibility for customer interactions and stock adjustments.
### 4. **LED Flashing for Specific Hanger Search**

When you search for a specific hanger through the web interface, the LEDs will flash to help you locate the item on the rack.

- **Search a Product**: In the search bar on the web interface, type the Hanger Number you're looking for.
  
- **Flashing LED**: Once the search is complete, the corresponding hanger’s LED will start flashing to help you quickly find the item.

### 5. **QR Code Generation for Product Details**

The system generates a QR code with detailed information about a product when it is searched. Customers can scan this code with their smartphones to view the product’s details.
  
- **Generate QR Code**: A QR code will appear containing product details such as name, description, price, and available sizes. Customers can scan the code using their phones to view this information.

- **Customer Interaction**: Customers can scan the QR code directly from the hanger, which provides instant access to product details on their mobile devices.

### 6. **Control from Web Interface**

The web interface provides you with full control over the system, allowing you to manage inventory, update product information, and configure the system.

- **Adjust Stock Levels**: Update the stock levels for any product. If the stock increases or decreases, the system will adjust the LED color.
- 
- **Unlock/Lock Hangers**: Manually unlock or lock the hangers via the web interface.
- 
- **Product Management**: You can update product details such as name, description, price, and quantity from the web interface.

---

### Notes for Users:

- Ensure that the hardware (Arduino, LEDs, servo motors) is properly set up and connected before using the web interface.
- The web interface is accessible from any device connected to the same network as the system. Just open a browser and go to `http://localhost:3660` (or your server’s IP address if it’s hosted remotely).
- The system is designed for use in retail or warehouse environments. You may need to adjust the system settings, such as stock thresholds and product details, based on the specific needs of your business.








