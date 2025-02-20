#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Rayan Radi, radir, 400503807
// Replaces `nan` values with the average of their column
void clean_impute(float **data, int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        float sum = 0.0;
        int count = 0;

        // Calculate column average, ignoring `nan`
        for (int i = 0; i < rows; i++) {
            if (!isnan(data[i][j])) {
                sum += data[i][j];
                count++;
            }
        }
        float avg = (count > 0) ? (sum / count) : 0.0; // Default to 0 if column is all `nan`

        // Replace `nan` with the calculated average
        for (int i = 0; i < rows; i++) {
            if (isnan(data[i][j])) {
                data[i][j] = avg;
            }
        }
    }
}
