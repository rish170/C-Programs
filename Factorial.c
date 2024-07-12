#include<stdio.h>

unsigned long long Factorial(int n);

int main(){
    int n;
    printf("Enter 'n' for factorial of n: "); scanf("%d", &n);
    printf("factorial of %d is = %llu", n, Factorial(n));
    return 0;
}

unsigned long long Factorial(int n){
    if (n < 0){
        printf("Number cannot be less than 0!");
    }
    else{
        unsigned long long fact = 1;
        for(unsigned int i=2 ; i <= n ; i++){
            fact *= i;
        }
        return fact;
    }
}