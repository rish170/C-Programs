#include <stdio.h>
#include <math.h>
void main()
{
	int n,og,last,first,num,temp,swap;
	scanf("%d",&n);
	og=n;
	if(n<0)
	{
		n= -n;
	}
	last = n%10;
	num=(int)log10(n);
	first = n/(int)pow(10,num);
	temp = (int)pow(10,num);
	swap = last * temp + (n%temp)/10*10+first;
	if(og<0)
	{
		swap = -swap;
	}
	printf("%d\n",swap);

}