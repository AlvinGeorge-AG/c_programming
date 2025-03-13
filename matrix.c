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
    //matrix 2
    int row2,col2,i2,j2;
    printf("Enter the number of rows & columns of matrix II(Space seperated) :");
    scanf("%d %d",&row2,&col2);
    int matrix2[row2][col2];
    for(i2=0;i2<row2;i2++){
        for(j2=0;j2<col2;j2++){
            printf("Enter the element at the position %d %d :",i2,j2);
            scanf("%d",&matrix2[i2][j2]);
        }
    }
    int newMatrix[row][col];
    if(row==row2 &&col==col2){
        //performing sum
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                newMatrix[i][j] = matrix2[i][j] + matrix[i][j];
            }
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf(" %d ",newMatrix[i][j]);
        
        }
        printf("\n");
    }
    return 0;
}