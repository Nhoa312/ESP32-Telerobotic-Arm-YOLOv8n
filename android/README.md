# Android Application

Android application developed for wireless control of the 5-DOF robotic manipulator.

The application provides three control modes:

- Manual control
- Voice control
- Vision-assisted control

The application communicates with the ESP32 via Bluetooth and integrates the
INT8-quantized YOLOv8n model for real-time surgical instrument detection.

Detected instruments can trigger predefined robotic motion sequences associated
with each instrument class.

## Computer Vision

The vision-assisted mode uses the mobile device camera for real-time inference.
The deployed model detects four classes:

1. Scalpel
2. Forceps
3. Straight Scissors
4. Curved Scissors

The optimized INT8 model is available in `computer_vision/models/`.
