#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Rayan Radi, radir, 400503807

// reads the grid dimensions and data from standard input
float **read_data(int *rows, int *cols) {
    scanf("%d %d", rows, cols); // Read number of rws and columns
    float **data = malloc(*rows * sizeof(float *)); // allocate memory for rows
    for (int i = 0; i < *rows; i++) {
        data[i] = malloc(*cols * sizeof(float)); // Allocate memory for each row
        for (int j = 0; j < *cols; j++) {
            scanf("%f", &data[i][j]); // Read each float into the grid
        }
    }
    return data;
}
