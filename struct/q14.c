#include <stdio.h>
void main()
{
    struct employee{
        char name[30];
        int e_id;
        double salary;
    };
    int n;
    printf("Enter number of employees:");
    scanf("%d",&n);
    struct employee e[n];
    for(int i=0;i<n;i++){
        printf("Enter name of employee :");
        scanf("%s",e[i].name);
        printf("Enter employee id:");
        scanf("%d",&e[i].e_id);
        printf("Enter the salary :");
        scanf("%lf",&e[i].salary);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("Detail of employee %d \n",i+1);
        printf("Name of employee: %s\n",e[i].name);
        printf("Employee id: %d\n",e[i].e_id);
        printf("Salary: %lf\n",e[i].salary);
        printf("\n");
    }
}