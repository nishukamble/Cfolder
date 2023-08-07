#include <stdio.h>
void natural(int n) 
{
	if (n <= 50) 
	    {
		printf("%d ", n);
		natural(n + 1); 
	    }
}
	int main() 
	{
	    printf("Natural numbers from 1 to 50:\n");
	    natural(1);
	    printf("\n");
	    return 0;
	}




