#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Rayan Radi, radir, 400503807
// Removes rows with `nan` values from the grid
float **clean_delete(float **data, int rows, int cols, int *new_rows) {
    float **cleaned_data = malloc(rows * sizeof(float *)); // Allocate memory for cleaned data
    *new_rows = 0; // Initialize the new row count

    for (int i = 0; i < rows; i++) {
        int has_nan = 0;
        for (int j = 0; j < cols; j++) {
            if (isnan(data[i][j])) { // Check if the row contains `nan`
                has_nan = 1;
                break;
            }
        }
        if (!has_nan) { // If the row is valid, copy it to the cleaned data
            cleaned_data[*new_rows] = malloc(cols * sizeof(float));
            for (int j = 0; j < cols; j++) {
                cleaned_data[*new_rows][j] = data[i][j];
            }
            (*new_rows)++; // Increment the new row count
        }
    }
    return realloc(cleaned_data, (*new_rows) * sizeof(float *)); // Trim memory to fit new size
}
