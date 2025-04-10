#include<stdio.h>
int matrix_input(int row, int col , int Matrix[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter the element at index [%d][%d] :",i,j);
            scanf("%d",&Matrix[i][j]);
        }
    }
    return 0;
}
int matrix_print(int row, int col, int Matrix[row][col]){
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf(" %d ",Matrix[i][j]);
        }
        printf("\n");
    }
}

int matrix_transpose(int row, int col, int Matrix[row][col]){
    printf("The Transpose Of Matrix A :\n");
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            printf(" %d ",Matrix[j][i]);
        }
        printf("\n");
    }
}
void matrix_add(int row, int col,int row2, int col2, int Matrix[row][col], int Matrix2[row][col]){

<<<<<<< HEAD
    if(row!=row2 && col!=col2){ 
        printf("Addition not possible !!\n");
        return 0;
=======
    if(row!=row2 && col!=col2){
        printf("Addition not possible !!\n");
        return ;
>>>>>>> 9c48f2f (Remove unnecessary VSCode configuration files and improve matrix addition error handling)
    }
    int result[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            result[i][j]=(Matrix2[i][j]+Matrix[i][j]);
        }
    }
    printf("The Matrix Sum  :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf(" %d ",result[i][j]);
        }
        printf("\n");
    }

}
int matrix_product(int row, int col,int row2,int col2, int Matrix[row][col], int Matrix2[row2][col2]){
    if(col!=row2){
        printf("Multiplication not possible !!\n");
        return 1;
    }
    int result[row][col2];
    for(int i=0;i<row;i++){
        for(int j=0;j<col2;j++){
            result[i][j]=0;
            for(int k=0;k<col;k++){
                result[i][j]+=Matrix[i][k]*Matrix2[k][j];
            } 
        }
    }
    printf("The Matrix Product  :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col2;j++){
            printf(" %d ",result[i][j]);
        }
        printf("\n");
    }
}
int main(){

    int row, col;
    printf("Enter the orders of Matrix's A and B \n");
    printf("\t MATRIX A \t\n");
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    int matrix[10][10];
    if (row > 10 || col > 10) {
        printf("Error: Maximum allowed size is 10x10.\n");
        return 1;
    }
    printf("\n");
    printf("\t MATRIX B \t\n");
    int row2, col2;
    printf("Enter the number of rows: ");
    scanf("%d", &row2);
    printf("Enter the number of columns: ");
    scanf("%d", &col2);
    int matrix2[10][10];
    if (row2 > 10 || col2 > 10) {
        printf("Error: Maximum allowed size is 10x10.\n");
        return 1;
    }
    //functions:
    printf("\t MATRIX A \t\n");
    matrix_input(row, col, matrix);
    printf("\t MATRIX B \t\n");
    matrix_input(row2,col2,matrix2);
    printf("The Matrix A :\n");
    matrix_print(row, col, matrix);
    printf("The Matrix B :\n");
    matrix_print(row2, col2, matrix2);
    matrix_transpose(row,col,matrix);
    matrix_add(row,col,row2,col2,matrix,matrix2);
    matrix_product(row,col,row2,col2,matrix,matrix2);
    return 0;
}