#include <stdio.h>
void main()
{
	int n,reverse = 0;
	scanf("%d",&n);
	while(n!=0)
		{
			reverse = reverse *10 + n% 10;
			n/= 10;
		}
	printf("%d\n",reverse);
}