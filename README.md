# 🤖 CNC Plotter Project

A computer-controlled drawing machine that uses stepper motors and a servo to draw shapes on paper based on G-code instructions.

---

## 📌 Project Overview

- **Goal**: Build a CNC plotter using Arduino, stepper motors, GRBL firmware, and a servo motor to draw 2D designs.
- **Drawing Area**: 300 mm x 300 mm
- **Control Software**: OpenBuilds Control / Universal G-code Sender (UGS)

---

## 🔧 Hardware Components

- Arduino UNO
- CNC Shield + A4988 Drivers
- NEMA 17 Stepper Motors (X and Y axes)
- Servo Motor (Pen up/down)
- Power Supply 12V
- Pen holder mechanism
- Wooden or acrylic frame

---

## 🧠 Software & Programming

- GRBL firmware flashed to Arduino UNO
- G-code used for drawing
- Servo control using `M3 S` commands (e.g., `M3 S30` = down, `M3 S90` = up)

---

## ▶️ How to Use

1. Upload GRBL firmware to Arduino UNO.
2. Open your G-code sending software (e.g., UGS).
3. Connect the CNC machine via USB.
4. Load your G-code file (e.g., square drawing).
5. Adjust steps/mm using GRBL parameters `$100` and `$101` for X and Y.
6. Start drawing.

---

## 📁 Folder Structure

```plaintext
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
│   └── Any other media
├── Programming/
│   ├── Arduino/
│   │   └── main_grbl_code.ino
│   └── Python/
│       ├── gcode_generator.py
│       └── svg_to_gcode.py
└── Other/
    ├── sub-sector-1/
    └── sub-sector-n/
