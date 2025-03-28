#include<stdio.h>
int main()
{
	int num;
	printf("Enter a week number :");
	scanf("%d",&num);
	if(num==1){printf("Week Day : MON\n");}
	else if(num==2){printf("Week Day : TUE\n");}
	else if(num==3){printf("Week Day : WED\n");}
	else if(num==4){printf("Week Day : THU\n");}
	else if(num==5){printf("Week Day : FRI\n");}
	else if(num==6){printf("Week Day : SAT\n");}
	else if(num==7){printf("Week Day : SUN\n");}
	else{printf("Not a valid Week number!\n");}
	return 0;
}

