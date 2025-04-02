#include<stdio.h>
int odd_even(int n){
    if(n%2==0)
        return 0;
    else
        return 1;    
}

void main(){
    printf("Enter the number :");
    int i;
    scanf("%d",&i);
    if(odd_even(i))
         printf("ODD");
    else     
        printf("EVEN");
}