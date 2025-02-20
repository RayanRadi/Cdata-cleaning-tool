#include <stdio.h>
// Rayan Radi, radir, 400503807
// Outputs the grid to standard output
void output_data(float **data, int rows, int cols) {
    printf("%d %d\n", rows, cols); // Print number of rows and columns
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%.3f ", data[i][j]); // Print each value rounded to 3 decimal places
        }
        printf("\n"); // Newline after each row
    }
}
