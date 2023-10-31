#include <stdio.h>
int main() {
	const int ROWS = 3;
	const int COLUMNS = 5;
	int array[ROWS][COLUMNS];
	int sum = 0;
	for (int index = 0; index < ROWS; index++) {
		for (int j = 0; j < COLUMNS; j++) {
			array[index][j] = index * index - j * 3;
		if (index == 1){sum = sum + array[index][j];}
			printf("%3d",array[index][j]);}
		printf("\n");}
	printf("The average of the second row : %d", sum / COLUMNS);
	return 0;}