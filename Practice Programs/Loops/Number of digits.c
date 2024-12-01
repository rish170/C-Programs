#include<stdio.h>

int countDigits(num){
    int count = 0;

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
    return count;

}



int main() {
    int num;

    scanf("%d", &num);

    int digitCount = countDigits(num);
    printf("Number of digits in %d is: %d\n", num, digitCount);

    return 0;
}