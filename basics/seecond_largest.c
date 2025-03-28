#include<stdio.h>
int arr[6] = {1,2,3,4,59,6};
int max=0;
int secmax=0;
void main(void){
    for (int i = 0; i < 6; i++){
        if (arr[i] > max){
            secmax = max;
            max = arr[i];
        } else if (arr[i] > secmax && arr[i] != max){
            secmax = arr[i];
        }
    }
    printf("Max: %d, Second Max: %d\n", max, secmax);
}