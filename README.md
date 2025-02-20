# Cdata-cleaning-tool
A C program that cleans floating-point data grids by removing or imputing missing values, ensuring data is ready for analysis.

## Features
- Reads input data from a text file.
- Supports deletion and imputation strategies for cleaning data.
- Outputs the cleaned grid in a structured format.

## Installation
1. Clone this repository:
   ```sh
   git clone https://github.com/YOUR_GITHUB_USERNAME/clean-utility.git


**Usage**
Run the program with:
./clean <input_file> <output_file> <strategy>

Where:
<input_file>: Path to the input data file.
<output_file>: Path to save the cleaned data.
<strategy>: Cleaning strategy (delete or impute)

File Descriptions
clean.c: Main program logic.
read_data.c/.h: Reads input grid.
clean_delete.c/.h: Implements deletion strategy.
clean_impute.c/.h: Implements imputation strategy.
output_data.c/.h: Outputs cleaned grid.
Makefile: Compiles all files.
.github/workflows/ci.yml: GitHub CI pipeline setup for continuous integration.

License
This project is for educational purposes.

Contributors
Rayan Radi
