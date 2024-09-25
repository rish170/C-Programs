#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, swappedNum, digits, multiplier;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int originalNum = num;
    lastDigit = num % 10;
    digits = (int)log10(num);
    firstDigit = num / (int)pow(10, digits);
    num = num % (int)pow(10, digits);  // Remove first digit
    num = num / 10;                    // Remove the last digit
    multiplier = (int)pow(10, digits);
    swappedNum = lastDigit * multiplier;
    swappedNum += num * 10;  
}            
