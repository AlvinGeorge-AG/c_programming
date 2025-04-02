//sorting with buble sort
#include<stdio.h>
void sort(int A[],int n)
{
    int i, j ,temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main()
{
    printf("Enter the size of the array : ");
    int n;
    scanf("%d", &n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element at the index %d :",i);
        scanf("%d",&array[i]);
    }
    printf("Array Before sorting :\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",array[i]);
        
    }
    printf("\n");
    sort(array,n);
    printf("Array after sorting :\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",array[i]);
        
    }
    printf("\n");
    return 0;
}