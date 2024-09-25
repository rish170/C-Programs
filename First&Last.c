#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;

    printf("Enter an integer: ");
    scanf("%d", &num);
    lastDigit = num % 10;

    if (num < 0) {
        num = -num;
    }

    while (num >= 10) {
        num = num / 10;
    }
    firstDigit = num;

    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    return 0;
}
