//a program to display prime numbers upto a range 
#include<stdio.h>

int prime(int i,int j){
    int flag =1;
    for(int p = i;p<j;p++)
    {
        for(int q=2;q<p;q++)
        {
            if(p%q==0)
                flag=0;
                break;
            
        }
        if(flag==1)
            printf("%d",p);   
        
    }
}
void main(){
    printf("Enter the lower limit & upper limit :");
    int u ,l;
    scanf("%d %d",&l,&u);
    prime(l,u);
}
