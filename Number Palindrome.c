#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPalindrome(unsigned int x);

int main(){
    int x;
    printf("Enter Number to check palindrome: "); scanf("%u", &x);
    if (isPalindrome(x)){
        printf("%s", "true");
    }
    else{
        printf("%s", "false");
    }
    return 0;
}

bool isPalindrome(unsigned int x) {
    int num = x;
    int digit;
    int reversedNum = 0;
    while(num!=0) {
        digit = num%10;
        reversedNum = reversedNum*10 + digit;
        num = floor(num/10);
    }
    printf("%d", reversedNum);
    if(x==reversedNum && x>=0){
        return true;
    }
    else{
        return false;
    }
}