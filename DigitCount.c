#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);
    if (num == 0) {
        count = 1;
    } 
    else {
        if (num < 0) {
            num = -num;
        }

        // Count digits using a loop
        while (num != 0) {
            num = num / 10;
            count++;
        }
    }
    printf("Number of digits in %d is: %d\n", num, count);

    return 0;
}
