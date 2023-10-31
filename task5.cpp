#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    const int k = 6;
    const int n = 5;
    int array[6][5];
    printf("Candidates  ");
    for(int index = 0;index < n;index++){
        if(index != 0){printf("   ");}
        printf("%d",index + 1);}
    printf("\n");
    for(int index = 0;index < k;index++){
        printf("|Place %d|",index + 1);
        for(int j = 0;j < n;j++){
            array[index][j] = rand() % 10 * 10 + 50;
            printf("%4d",array[index][j]);}
    printf("|\n");}
    int max2 = array[1][0];
    int max3 = array[2][0];
    int maxindex2 = 1;
    int maxindex3 = 1;
    for(int index = 0;index < n;index ++){
        if(array[1][index] > max2){
            max2 = array[1][index];
            maxindex2 = index + 1;}
        if(array[2][index] > max3){
            max3 = array[2][index];
            maxindex3 = index + 1;}}
    printf("Candidate number %d has a total of %d votes in place number 2\n",maxindex2,max2);
    printf("Candidate number %d has a total of %d votes in place number 3",maxindex3,max3);
    return 0;}