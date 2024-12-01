#include <stdio.h>
void  main()
{
	int n,og,rev=0,temp;
	scanf("%d",&n);
	og=n;
	temp=n;
	while(temp!=0)
		{
			rev = rev *10+ temp % 10;
			temp /=10;
		}
	if(og==rev)
	{
		printf("Palindrome\n");
	}
	else{
		printf("Not a palindrome\n");
	}
}