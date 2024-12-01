#include <stdio.h>
#include<stdbool.h>
int isPrime(int num) {
    if(num<=1)return false;
	if(num==2)return true;
	if(num%2==0)return false;
	for(int i=3; i*i<=num; i+=2)
		{if (num% i == 0)return false;}
	return true;
}

int main() {
    int num;
	printf("Enter a number: ");
	scanf("%d",&num);

	int evenOdd = num%2;
	int prime = isPrime(num);

    switch (isPrime(num)) {
        case true:
		printf("%d is prime\n",num);
		break;

		case false:
		printf("%d is composite\n",num);
		break;
    }

    switch(evenOdd){
		case 0:
		printf("%d is even\n",num);
		break;

		case 1:
		printf("%d is odd\n",num);
		break;
	}
}