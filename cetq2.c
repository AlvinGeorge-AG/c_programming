#include<stdio.h>
int main(){
    //matrix 1
    int row,col,i,j;
    printf("Enter the number of rows & columns of matrix I(Space seperated) :");
    scanf("%d %d",&row,&col);
    int matrix[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Enter the element at the position %d %d :",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}