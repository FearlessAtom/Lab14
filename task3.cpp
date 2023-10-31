#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
	srand(time(0));
	const int COLUMNS = 100;
	const int ROWS = 100;
	int array[ROWS][COLUMNS];
	int something;
	printf("How many rows would the array have? : "); int rows; scanf("%d", &rows);
	printf("How many columns would the array have? : "); int columns; scanf("%d", &columns);
	printf("What is the value of a : "); int a; scanf("%d",&a);
	printf("What is the value of b : "); int b; scanf("%d", &b);
	if (a >= b) { printf("b must be greater than a"); return 1; }
	if (rows > ROWS) { printf("Too many rows (max is 100)"); return 1; }
	if (columns > COLUMNS) { printf("Too many columns (max is 100)"); return 1; }
	for (int index = 0; index < rows; index++) {
		for (int j = 0; j < columns; j++) {
			array[index][j] = rand() % (b - a + 1) + a;
			printf("%3d", array[index][j]);}
		printf("\n");}
        printf("\n");
	for(int index = 0;index < rows;index++){
        for(int j = 0;index < columns;index++){
            array[0][index] = array[j][0] + array[j][columns - 1];}}
    for(int index = 0;index < rows;index++){
        for(int j = 0;j < columns;j++){
            printf("%3d",array[index][j]);}
    printf("\n");}
	return 0; }