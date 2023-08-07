#include<stdio.h>
int main()
	{
	int a;
	int *p;
	p=10;
	p = &a;
	printf("%d\n",p);
	printf("%d\n",*p);
	printf("%d\n",&a);
	}
