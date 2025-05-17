
# 🤖 CNC Plotter Project

A **2D computer-controlled plotter** that uses stepper motors and a lead-screw-based Z-axis to precisely draw designs using G-code.

---

## 📌 Project Overview

- 🎯 **Goal**: Build a CNC plotter using Arduino UNO, GRBL firmware, and NEMA 17 stepper motors — **including a mechanical Z-axis for pen control**.
- 🖊️ **Drawing Area**: 300 mm x 300 mm
- 🧩 **Control Software**:  
  - [OpenBuilds Control](https://software.openbuilds.com/)  
  - [Universal G-code Sender (UGS)](https://winder.github.io/ugs_website/)

---

## 🔧 Updated Hardware Components

| Component                  | Description                                           |
|---------------------------|-------------------------------------------------------|
| Arduino UNO               | Flashed with GRBL firmware                            |
| CNC Shield v3             | Controls all axes via A4988 drivers                   |
| A4988 Stepper Drivers     | Drives stepper motors                                 |
| 3 × NEMA 17 Motors        | X, Y axes and **Z-axis with screw mechanism**         |
| **Z-Axis Upgrade**        | **M10 threaded rod (pitch = 1.5 mm)** replaces servo  |
| 12V 5A Power Supply       | Supplies all components                               |
| Pen holder with lift mech | Mounted on Z-axis screw                               |
| Frame                     | Built from MDF or acrylic with steel rods             |
| USB Cable                 | Connects Arduino to PC                                |

---

## 🧠 Software & Programming

- **GRBL Firmware**: Interprets standard G-code and controls all 3 axes.
- **Z-Axis Control** (no servo):
  - Use **Z-axis motion** to lift/lower pen in G-code:
    - `G1 Z0` → Pen Down
    - `G1 Z5` → Pen Up (example)
- **G-code Generation Tools**:
  - Inkscape (with GcodeTools plugin)
  - Python script (`svg_to_gcode.py`) with Z motion support

---

## ⚙️ Calibration Parameters

| Parameter | Axis | Value         | Description                               |
|----------:|------|---------------|-------------------------------------------|
| `$100`    | X    | 400.00         | Steps/mm for X-axis                       |
| `$101`    | Y    | 400.00         | Steps/mm for Y-axis                       |
| `$102`    | Z    | **2133.33**   | Based on M10 rod with 1.5 mm pitch        |
| `$112`    | Z    | **200 mm/min**| Z max speed                               |
| `$122`    | Z    | 20 mm/s²      | Z acceleration                            |

📌 **Note**: Adjust `$102` if you're using microstepping other than 1/16 or if the thread pitch differs.

---

## 🧪 Motor Wiring Guide

To determine stepper motor pairs:

1. Try connecting 2 wires at a time and rotate shaft by hand.
2. If it resists, those two form one coil.
3. Wire as follows (example from your case):
   - A+ A−: Red + Red/White
   - B+ B−: Black + Black/White
   - Repeat for each axis.

---

## ▶️ How to Use

1. Flash GRBL to Arduino UNO.
2. Assemble mechanical frame and install electronics.
3. Connect to PC and launch G-code sender.
4. Send G-code with proper **Z-axis movements**.
5. Start plotting.

---

## 📁 Project Structure

```
CNC_Plotter_Project/
├── README.md
├── Documentation/
│   ├── Updated_Presentation.pdf
│   └── Poster.pdf
├── Media/
│   ├── Build_Photo.jpg
│   ├── Demo_Video.mp4
│   └── Team_Photo.jpg
├── Programming/
│   ├── Arduino/
│      └── grbl_config.ino

```

---

## 📷 Demo & Results

📸 Picture of updated design with mechanical Z  
🎥 Demo Video: `Demo_Video.mp4`
