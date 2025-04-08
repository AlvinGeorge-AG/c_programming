#include<stdio.h>
int main(){
    struct distance{
        float d1;
        float d2;
    };
    struct distance var1;
    printf("Enter the distance 1 :");
    scanf("%f",&var1.d1);
    printf("Enter the distance 2 :");
    scanf("%f",&var1.d2);
    printf("Total distance : %.2f",var1.d1+var1.d2);
}