#include<stdio.h>
int main()
{
	int num,flag=0;
	printf("Enter a number :");
	scanf("%d",&num);
	if(num==2){printf("Its a prime\n");return 0;};
	for(int i = num-1;i>=2;i--){
			if(num%i==0){
				flag=0;
				break;
			}
			else{flag=1;}
		}
		if(flag==1){printf("Its a prime\n");}
		else{printf("Not a prime!\n");}
		return 0;
	
}
