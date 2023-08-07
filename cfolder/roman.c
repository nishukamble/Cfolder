#include <stdio.h>
int main()
{
	int n,rem;
	printf("enter number:");
	scanf("%d",&n);
	printf("Roman numbers:");	
	while(n!=0)
	{
	if(n>=1000)
	{
	printf("m");
	n-=1000;
	}
	else if (n>=900)
	{
	printf("cm");
	n-=900;
	}
	}
	return 0;
	}
