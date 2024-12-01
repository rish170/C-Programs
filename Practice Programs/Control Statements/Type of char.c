#include<stdio.h>

void main(){
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);

	if ((c>='a' && c<='z') || (c>='A' && c<='Z')){
		printf("The character is an alphabet\n");
	}
	else if (c>='0' && c<='9'){
		printf("The character is a digit\n");
	}
	else{
		printf("The character is a special character\n");
	}
}