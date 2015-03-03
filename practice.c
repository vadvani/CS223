#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void make2DArray (char** arrayLocation, int columns, int rows) {

	char** array;
	int i;
	int j;
	array = arrayLocation;

	array = malloc(sizeof(char*) * rows);
	assert(array);

	for (i=0; i<rows; i++) {
		array[i] = malloc(sizeof(char) * (columns + 1));
		assert(array[i]);
	}

	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++) {
			array[i][j] = '1';
		}
		array[i][columns] = '\0';
	}

}

void print2DArray (int rows, char** array) {
	int i;
	for (i = 0; i<rows; i++) {
		printf("%s\n", array[i]);
	}
}

void free2DArray (int rows, char** array) {
	int i;
	for (i=0; i<rows; i++) {
		free(array[i]);
	}
	free(array);
}


int
main(int argc, char **argv) {

	char** array;
	make2DArray(array, 10, 10);
	print2DArray(10, array);
	free2DArray(10, array);
	return 0;
}