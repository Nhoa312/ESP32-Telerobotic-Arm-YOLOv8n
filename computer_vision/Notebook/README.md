# Notebooks

This directory contains the complete experimental pipeline for the YOLOv8n-based surgical instrument detection system.

## Contents

`YOLOv8n_Surgical_Instruments.ipynb` includes:

- Dataset inspection and class distribution analysis
- Data leakage verification
- Dataset reorganization into 70% training, 10% validation, and 20% testing
- YOLOv8n training
- Independent test-set evaluation
- Confusion matrix generation
- Computational performance benchmarking
- LiteRT/TFLite model export
- INT8 quantization and evaluation

The model detects four surgical instrument classes: **Scalpel, Forceps, Straight Scissors, and Curved Scissors**.

Training and experiments were performed using Kaggle with a fixed random seed (`42`) for reproducibility.
