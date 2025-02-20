CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: clean

clean: clean.c read_data.c clean_delete.c clean_impute.c output_data.c
	$(CC) $(CFLAGS) -o clean clean.c read_data.c clean_delete.c clean_impute.c output_data.c

clean_output:
	rm -f clean
