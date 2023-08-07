#include <stdio.h>
int main()
{
	char c;
	c=getchar();
	while(c!=EOF);
	{
	putchar(c);
	printf("\n");
	c=getchar();
	}
	}
