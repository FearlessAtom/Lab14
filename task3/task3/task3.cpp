#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
	srand(time(0));
	const int COLUMNS = 100;
	const int ROWS = 100;
	int array[ROWS][COLUMNS];
	
	int something;

	printf("How many rows would the array have? : "); int rows; scanf_s("%d", &rows);
	if (rows > ROWS) { printf("Too many rows (max is 100)"); return 1; }
	printf("How many columns would the array have? : "); int columns; scanf_s("%d", &columns);
	printf("What is the value of a : "); int a; scanf_s("%d",&a);
	printf("What is the value of b"); int b; scanf_s("%d", &b);
	if (a >= b) { printf("b must be greater than a"); return 1; }
	if (columns > COLUMNS) { printf("Too many columns (max is 100)"); return 1; }
	for (int index = 0; index < rows; index++) {
		for (int j = 0; j < columns; j++) {
			array[index][j] = rand() % abs(a + b - 1) - a + 2;
			printf("%3d", array[index][j]);}
		printf("\n");}
	
	
	
	for (int index = 0; index < rows; index++) {
		for (int j = 0; j < columns; j++) {
			if (index = 0) { something = array[0][j]; }
			if (index = columns) { something = array[rows][j]; }
		
		}
	
	
	
	
	}





	return 0; }









