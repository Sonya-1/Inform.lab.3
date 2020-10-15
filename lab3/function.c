#include <stdio.h>

int funct(int* array, int b, int array_len) {
	int i, diff = 0, c = 0, d, isset = 0;

	if (array_len == 0) {
		printf("No data\n");
		return 0;
	}

	for (i = 0; i < array_len; i++) {

		d = array[i] - b;

		if (d < 0) {
			d = -d;
		}

		if (d < diff || isset == 0) {
			isset = 1;
			diff = d;
			c = array[i];
		}
	}
	return c;
}