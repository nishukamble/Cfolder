#include<stdio.h>
int main()
	{
	int a;
	int *p;
	p=10;
	p = &a;
	printf("a =%d\n",a);
	*p=12;
	printf("a =%d\n",a);
