#include<stdio.h>

int main(){
	int r;
	float pi = 3.14159;
	float area, circum;
	printf("Enter the radius: ");
	scanf("%d", &r);
	area = pi*r*r;
	circum = 2*pi*r;
	printf("Area: %.2f\n", area);
	printf("Circumference: %.2f\n", circum);

	return 0;
}