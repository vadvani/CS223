#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


int search (int value, const int* a, int length) {
	int mid;
	mid = length/2;

	while (length !=0) {
		mid = length/2;
		if (value == a[mid]) {
			return 1;
		}else if (value < a[mid]) {
			length = length/2;
		}else if (value > a[mid]) {
			length = length - length/2 - 1;
			a = a + length/2 + 1;
		}

	}
	return 0;

}

int main(int argc, char **argv) {

	int* a;
	a = malloc(sizeof(int) * 10);

	for (int i=0; i<10; i++) {
		a[i] = i;
	}

	printf("Search for 5 = %d\n" search(5, a, 10));
	printf("Search for 12 = %d\n" search(12, a, 10));

	return 0;

}