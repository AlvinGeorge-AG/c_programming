#include<stdio.h>
int main(){


int row,col,i,j,row2,col2;
    printf("Enter the number of rows & columns of matrix I(Space seperated) :");
    scanf("%d %d",&row,&col);
    int matrix1[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Enter the element at the position %d %d :",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Enter the number of rows & columns of matrix II(Space seperated) :");
    scanf("%d %d",&row2,&col2);
    int matrix2[row2][col2];
    for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            printf("Enter the element at the position %d %d :",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    if(col!=row2){
        printf("Matrix Multiplication not possible");
        return 0;
    }
    int product[row][col2];
    for(i=0;i<row;i++){
        int var1=0,var2;
        for(j=0;j<col2;j++){
            var1+=(matrix1[i][j])*(matrix2[j][i]);
            
        }
        printf("%d\n",var1);
        
    }

    // for(i=0;i<row;i++){
    //     for(j=0;j<col;j++){
    //         printf(" %d ",product[i][j]);
        
    //     }
    //     printf("\n");
    // }
    return 0;
}