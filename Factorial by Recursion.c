#include<stdio.h>

int fact(int n){
    if (n==0 || n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
    

}

int main(){
    int a;
    printf("Enter the number to calculate factorial: ");
    scanf("%d", &a);
    printf("Factorial of %d is = %d", a, fact(a));
}