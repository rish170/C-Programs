#include<stdio.h>

int main(){
	int l, b, peri, area;
	scanf("%d %d", &l, &b);
	peri = 2*(l+b);
	area = l*b;
	printf("%d\n", peri);
	printf("%d\n", area);
}