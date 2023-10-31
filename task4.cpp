#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(0));
    const int NUMBER = 3;
    int array[NUMBER][NUMBER];   
    int sum = 0;
    int sum2 = 0;
    for(int index = 0;index < NUMBER;index++){
        for(int j = 0;j < NUMBER;j++){
            array[index][j] = rand() % 10 + 1;
            printf("%3d",array[index][j]);
            if(!(index < j && j < NUMBER - index - 1 || index > j && j > NUMBER - index - 1 )){sum = sum + array[index][j];}}
    printf("\n");}
    printf("The sum is : %d",sum);
    return 0;}