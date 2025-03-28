#include<stdio.h>
int main(){
    char string[50],newstr[50];
    int i=0 , len=0;
    printf("Enter the string :");
    scanf("%[^\n]",string);
    while(string[i]!='\0'){
        len++;
        i++;
    }
    for(int j=0;j<len;j++){
        newstr[j]=string[len-j-1];
    }
    printf("New String: %s",newstr);
    return 0;
}