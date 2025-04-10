#include<stdio.h>
struct CSC
{
    char name[50];
    int age ;
    int roll;
};
struct CSC s1;
int main(){
    printf("Enter the name of the student :");
    scanf("%[^\n]",&s1.name);
    printf("Enter the age of  the student :");
    scanf("%d",&s1.age);
    printf("Enter the roll number  of the student :");
    scanf("%d",&s1.roll);
    printf("Student details :\n");
    printf("STUDENT NAME        : %s",s1.name);
    printf("STUDENT AGE         :%d",s1.age);
    printf("STUDENT ROLL NUMBER :%d",s1.roll);
    return 0;




}