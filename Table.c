#include<stdio.h>

int main(){
    int a;
    printf("Enter a number to print table: ");
    scanf("%d", &a);

    for(int i = 1; i<=10; i++){
        printf("%d X %d = %d\n", a, i, a*i);
    }

    return 0;
}