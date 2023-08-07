#include<stdio.h>
int main()
{
	float lower,c;
	for (lower=0;lower <=300;lower =lower+20)
{
	c=5.0/9.0*(lower-32);
	printf("%f\t%f\n",lower,c);
	}
	return 0;
	}
