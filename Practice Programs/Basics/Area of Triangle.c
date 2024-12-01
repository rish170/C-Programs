#include<stdio.h>

int main(){
	float b, h, area;
	scanf("%f", &b);
	scanf("%f", &h);
	area = (b*h)*0.5;
	printf("%.2f\n", area);
}