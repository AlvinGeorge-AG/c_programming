#include <stdio.h>
int main(void){
    int n;
    printf("How many numbers you want to enter : ");
    scanf("%d",&n);
    int arr[n];
    printf("\n");
    for (int j=0;j<n;j++){
        printf("Enter the number for the index  %d :",j);
        scanf("%d",&arr[j]);
    }

    int given_num;
    printf("Enter the number to check frequency :");
    scanf("%d",&given_num);
    int freq=0;
    for(int i =0;i<n;i++){
        if(arr[i]==given_num){
            freq++;
        }
        else{continue;}
    }
    printf("frequency of %d is %d\n",given_num,freq);
    return 0;

}