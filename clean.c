#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "read_data.h"
#include "clean_delete.h"
#include "clean_impute.h"
#include "output_data.h"

// Rayan Radi, radir, 400503807

int main(int argc, char *argv[]) {
    int rows, cols;

    // Read the grid data
    float **data = read_data(&rows, &cols);

    // Choose cleaning strategy based on the flag
    if (argc > 1 && strcmp(argv[1], "-d") == 0) {
        int new_rows;
        float **cleaned_data = clean_delete(data, rows, cols, &new_rows);
        output_data(cleaned_data, new_rows, cols);
        // Free memory for cleaned data
        for (int i = 0; i < new_rows; i++) {
            free(cleaned_data[i]);
        }
        free(cleaned_data);
    } else {
        clean_impute(data, rows, cols);
        output_data(data, rows, cols);
    }

    // Free memory for the original data
    for (int i = 0; i < rows; i++) {
        free(data[i]);
    }
    free(data);

    return 0;
}
