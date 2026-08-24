# Models

This directory contains the YOLOv8n models evaluated and deployed in this work.

## Available Models

- `YOLOv8n_SurgicalTools_best.pt`  
  Original PyTorch model used for test-set evaluation and Python benchmarking.

- `YOLOv8n_SurgicalTools_best_fp32.tflite`  
  FP32 mobile model used as the baseline for Android deployment.

- `YOLOv8n_SurgicalTools_best_int8.tflite`  
  INT8-quantized model used for the optimized Android implementation.

All models detect four surgical instrument classes: **Scalpel, Forceps, Straight Scissors, and Curved Scissors**.
