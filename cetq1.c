#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int points[4];
    char grade[4];
    printf("NOTE : ENTER GRADES IN CAPITAL LETTERS !\n");
    for(int j=0;j<4;j++){
        printf("Enter the grade for subject %d : ",j+1);
        scanf(" %c",&grade[j]);
        grade[j] = toupper(grade[j]);
        switch(grade[j]){  
            case 'A':
                points[j]=10;
                break;
            case 'B':
                points[j]=9;
                break;
            case 'C':
                points[j]=8;
                break;
            case 'D':
                points[j]=7;
                break;
            case 'F':
                points[j]=0;
       
        }
    }
        int sum=0;     
        for(int i=0;i<4;i++){
            sum+=points[i];
        }
        printf("GPA : %f\n",(float) sum/40);
        return 0;

    
    
    }