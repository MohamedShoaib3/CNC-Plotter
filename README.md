# 🤖 CNC Plotter Project

A **computer-controlled drawing machine** built using stepper motors and a servo to draw 2D shapes on paper based on G-code instructions.

---

## 📌 Project Overview

- 🎯 **Goal**: Design and implement a CNC plotter using Arduino UNO, GRBL firmware, and stepper motors to draw 2D designs.
- 🖊️ **Drawing Area**: 300 mm x 300 mm
- 🧩 **Control Software**: [OpenBuilds Control](https://software.openbuilds.com/) / [Universal G-code Sender (UGS)](https://winder.github.io/ugs_website/)

---

## 🔧 Hardware Components

- Arduino UNO
- CNC Shield v3 + A4988 Stepper Drivers
- 2 × NEMA 17 Stepper Motors (for X and Y axes)
- 1 × SG90 Servo Motor (pen up/down mechanism)
- 12V Power Supply
- Pen holder mechanism
- Wooden or acrylic frame structure
- USB cable for communication

---

## 🧠 Software & Programming

- **GRBL Firmware**: Flashed onto Arduino UNO for interpreting G-code.
- **G-code Instructions**: Used to control motor movements and pen positioning.
- **Servo Control via G-code**:  
  - `M3 S30` → Pen Down  
  - `M3 S90` → Pen Up

You can generate G-code using tools like:
- Inkscape with Gcode Tools extension
- Custom Python scripts (`svg_to_gcode.py`)

---

## ▶️ How to Use

1. Flash GRBL firmware to Arduino UNO using the Arduino IDE or XLoader.
2. Assemble the mechanical frame and mount all electronic components.
3. Launch a G-code sender like UGS.
4. Connect the CNC machine to your PC via USB.
5. Calibrate steps/mm:
   - `$100` → X-axis steps/mm  
   - `$101` → Y-axis steps/mm  
6. Load and send a G-code file (e.g., `square.gcode`) to start plotting.

---

## 📁 Project Structure

```
CNC_Plotter_Project/
├── README.md
├── Documentation/
│   ├── Presentation.pdf
│   ├── Book.pdf (optional)
│   └── Poster.pdf (optional)
├── Media/
│   ├── Project_image1.jpg
│   ├── Project_image2.jpg
│   ├── Result_Video.mp4
│   ├── Team_picture1.jpg
│   └── Other media files
├── Programming/
│   ├── Arduino/
│   │   └── main_grbl_code.ino
│   └── Python/
│       ├── gcode_generator.py
│       └── svg_to_gcode.py
└── Other/
    ├── sub-sector-1/
    └── sub-sector-n/
```

---

## 📷 Demo & Results

![Plotter in Action](Media/Project_image1.jpg)  
Check out the [Result Video](Media/Result_Video.mp4) to see the machine in operation.

---

## 🚀 Future Enhancements

- Add limit switches for better axis referencing.
- Improve structural stability using aluminum frames.
- Add touchscreen control interface (e.g., using Nextion).
- Support for plotting on different surfaces.
