# Models

This directory contains the trained YOLOv8n models used for surgical instrument detection.

## Available Models

- `YOLOv8n_SurgicalTools_best.pt`  
  Original PyTorch YOLOv8n model used for the main test-set evaluation.

- `YOLOv8n_SurgicalTools_best_int8.tflite`  
  INT8-quantized model used for mobile deployment on the Android application.

The models detect four surgical instrument classes:

1. Scalpel
2. Forceps
3. Straight Scissors
4. Curved Scissors
