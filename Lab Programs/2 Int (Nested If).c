#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2) {
        printf("%d = %d\n", num1, num2);
    } else {
        if (num1 > num2) {
            printf("%d > %d\n", num1, num2);
        } else {
            printf("%d < %d\n", num1, num2);
        }
    }

    return 0;
}
