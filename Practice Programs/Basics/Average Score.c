#include<stdio.h>

int main(){
	int s1, s2, s3;
	float avg;
	scanf("%d", &s1);
	scanf("%d", &s2);
	scanf("%d", &s3);

	avg = (s1 + s2 + s3)/3.0;
	printf("%.3f\n", avg);
}