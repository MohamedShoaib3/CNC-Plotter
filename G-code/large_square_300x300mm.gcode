
G21 ; Set units to millimeters
G90 ; Use absolute positioning

; Lower the pen (servo down)
M3 S30
G4 P0.5 ; Wait for 0.5 seconds

; Draw a 30x30 cm square (300x300 mm)
G1 X0 Y0 F1000
G1 X300 Y0 F1000
G1 X300 Y300 F1000
G1 X0 Y300 F1000
G1 X0 Y0 F1000

; Raise the pen (servo up)
M3 S90
G4 P0.5 ; Wait for 0.5 seconds

; Return to origin quickly
G0 X0 Y0
