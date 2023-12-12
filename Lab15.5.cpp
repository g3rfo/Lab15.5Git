#include <iostream>
#include <stdio.h>
#define size 10

int main()
{
	int i, j;

	int array[size];

	for (i = 0; i < size; i++) {
		printf("Enter %d number: ", i + 1);
		scanf_s("%d", &array[i]);
	}

	for (j = size; j > 0; j--) {
		printf("%d\n", array[j - 1]);
	}

	return 0;
}