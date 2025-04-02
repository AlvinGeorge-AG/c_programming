#include<stdio.h>
//using recursion
int fact(int n) {
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int factorial(int n){
    int result=1;
    for(int i=1;i<=n;i++){
        result=result*i;
    }
    return result;
}
int main() {
    printf("Enter the number :");
    int n;
    scanf("%d", &n);
    printf("Using recursion :\n");
    int res = fact(n);
    printf("Factorial of %d is : %d\n", n, res);
    printf("Without recursion :\n");
    int fact = factorial(n);
    printf("Factorial of %d is : %d\n", n, fact);
    return 0;
}