#ifndef CLEAN_DELETE_H
#define CLEAN_DELETE_H

// Function prototype for cleaning data by deleting rows with `nan`
float **clean_delete(float **data, int rows, int cols, int *new_rows);

#endif
