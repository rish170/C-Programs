#include<stdio.h>

int main(){
    int a=0; int b=1;
    int n; int i = 2;
    int c;
    printf("Enter n to print Fibonacci Series: ");
    scanf("%d", &n);
    printf("%d\t%d\t", a, b);
    while(i < n){
        c = a+b;
        printf("%d\t", c);
        a = b;
        b = c;
        i++;
    }
    return 0;
}