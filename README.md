# Internship Task 2: Smart Doorbell System 🔔

An Arduino-based smart doorbell prototype developed as part of an internship assignment. This project utilizes a microcontroller to handle user inputs (like a push button) and trigger an alert system (like a buzzer or LED indicator).

## 🚀 Features

* **Instant Trigger:** Low-latency response when the doorbell button is pressed.
* **Audio/Visual Alerts:** Uses a buzzer and/or LED indicators to signal a visitor.
* **PlatformIO Ready:** Structured for modern embedded development using VS Code and PlatformIO.

---

## 🛠️ Hardware Requirements

To build this circuit, you will need:
* 1 x Arduino UNO (or compatible microcontroller)
* 1 x Push Button
* 1 x 5V Active Buzzer
* 1 x LED (Optional indicator)
* 1 x $10k\Omega$ Resistor (Pull-down resistor for the button)
* 1 x $220\Omega$ Resistor (For the LED)
* 1 x Breadboard
* Jumper wires

### Pin Configuration *(Adjust according to your final circuit)*
| Component | Arduino Pin |
| :--- | :--- |
| **Push Button** | Pin 2 |
| **Buzzer** | Pin 8 |
| **LED Indicator** | Pin 13 |

---

## 💻 Software & Setup

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/mohdsuhail404/Internship_T2-Smart_Doorbell-.git](https://github.com/mohdsuhail404/Internship_T2-Smart_Doorbell-.git)
   ```
2. Open the project folder in **VS Code** with the **PlatformIO** extension installed.
3. Connect your Arduino board to your computer via USB.
4. PlatformIO will automatically configure the environment using `platformio.ini`.
5. Build and upload the code to your board.

---

## 📝 Code Overview

The logic reads the digital state of the push button. When pressed, it triggers the buzzer and LED:

```cpp
#include <Arduino.h>

const int buttonPin = 2;
const int buzzerPin = 8;
const int ledPin = 13;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH); // Ring the doorbell
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);  // Silence
  }
}
