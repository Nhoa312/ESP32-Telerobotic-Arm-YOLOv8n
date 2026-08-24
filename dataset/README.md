# Dataset

The computer vision model was developed using the **Surgical tools 2** dataset
available on Roboflow Universe.

**Source:**  
https://universe.roboflow.com/school-ratfh/surgical-tools-2/dataset/1

The dataset contains four surgical instrument classes:

1. Scalpel
2. Forceps
3. Straight Scissors
4. Curved Scissors

For the experiments in this work, the original dataset was reorganized into:

- 70% training
- 10% validation
- 20% testing

Images derived from the same original sample were kept within the same subset
to prevent data leakage between training, validation, and testing sets.

The code used to reproduce the dataset split is available in the
`computer_vision/notebooks/YOLOv8n_Surgical_Instruments.ipynb` notebook.

## License

The original dataset is available through Roboflow Universe. Users should refer
to the original dataset page for licensing and attribution information.
