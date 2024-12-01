#include<stdio.h>

void main(){
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);

	if (c>='A' && c<='Z'){
		printf("The character is an uppercase alphabet\n");
	}
	else if (c>='a' && c<='z'){
		printf("The character is a lowercase alphabet\n");
	}
	else{
		printf("The character is not an alphabet\n");
	}
}