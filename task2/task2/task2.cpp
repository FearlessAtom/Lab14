#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
	srand(time(0));
	int min, max, maxi, maxj,mini,minj;
	int array[5][5];
	for(int index = 0; index < 5; index++){
        for(int j = 0; j < 5; j++){
            array[index][j] = rand() % 20 - 9;
	printf("%3d", array[index][j]);}
	printf("\n");}
	min = array[0][0];
	max = array[0][0];
	int sum = 0;
	int mulindexj = 1;
	int sumindexj = 0;
	int under = 0;
	for (int index = 0; index < 5; index++){
		sum = 0;
		for (int j = 0; j < 5; j++){
			if(array[index][j] < min){min = array[index][j];
			minj = j;
			mini = index;}
			if(array[index][j] > max){max = array[index][j];
			maxj = j;
			maxi = index;}
			if (index == j) { mulindexj = mulindexj * array[index][j];}
			if (index == j) { sumindexj = sumindexj + array[index][j]; }
			if (index < j) { under = under + array[index][j];}
			sum = sum + array[index][j];}
			printf("The average value of elements in the row number %d is %d\n",index + 1,sum / 5);}
	printf("The sum of elements under the main diagonal is %d", under);
	printf("\nThe sum of elements of the main diagonla is : %d", sumindexj);
	printf("\nThe product of elements of the main diagonal is : %d", mulindexj);
	printf("\nMax element is : %d. Column = %d, row = %d",max,maxj + 1,maxi + 1);
	printf("\nMin element is : %d. Column = %d, row = %d", min,minj + 1,mini + 1);
	return 0;}