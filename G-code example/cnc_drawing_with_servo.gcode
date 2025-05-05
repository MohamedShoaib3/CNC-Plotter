
G21 ; Set units to millimeters
G90 ; Use absolute positioning

; Lower the pen (servo down)
M3 S30
G4 P0.5 ; Wait for 0.5 seconds

; Draw a square
G1 X10 Y10 F500
G1 X20 Y10 F500
G1 X20 Y20 F500
G1 X10 Y20 F500
G1 X10 Y10 F500

; Raise the pen (servo up)
M3 S90
G4 P0.5 ; Wait for 0.5 seconds

; Return to origin
G0 X0 Y0
