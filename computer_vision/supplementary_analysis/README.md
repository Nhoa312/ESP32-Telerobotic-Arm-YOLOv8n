FP32 vs. INT8: Supplementary Surgical Instrument Detection Analysis
Purpose: This notebook compares FP32 and INT8 TensorFlow Lite models on the same held-out test set. It examines localization performance by instrument class, object size, and bounding-box overlap. Dataset details are provided separately in the repository's Dataset section.
Key results
At IoU = 0.75, the change in instance-level recall from FP32 to INT8 was:
| Group | Change (percentage points) |
|---|---:|
| Scalpel | -6.71 |
| Forceps | -6.67 |
| Medium objects (1–5% of image area) | -14.94 |
| Large objects (≥5% of image area) | -0.98 |


The changes across bounding-box overlap groups did not follow a consistent trend. These recall values use per-instance, same-class matching; they are not mAP@0.75.
This supplementary notebook compares FP32 TFLite (approximately 0.8197) against INT8 TFLite (approximately 0.6857) to assess the quantization-related difference using the same deployment format. The two comparisons have different FP32 baselines.

Files and use
- Notebook (.ipynb): validation, per-instance comparisons, tables, and plots.
- Figures: exported visualizations, including recall versus object size.
- Results (.csv): evaluation metrics and subgroup summaries.
To reproduce the analysis, open the notebook in Kaggle, configure the model and test-set paths, and run the cells in order. The notebook does not retrain the models.

Scope: This material evaluates image detection and localization only; it does not measure Bluetooth latency, robotic grasping success, or clinical safety.
