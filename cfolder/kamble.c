#include <stdio.h>
int main()
{
	char c; int count;
	c=getchar();
	count=0;
	while (c!=EOF)
	{
		count=count+1;
		c=getchar();
		
	
	}
	printf("%d",count);
	return 0;
		
      
}

