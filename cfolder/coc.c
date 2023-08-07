 #include <stdio.h>
int main()
{
	int rad;
	float PI =3.14,area,ci;
	
	printf("enter the radius of circle:");
	scanf("%d",&rad);
	area= PI*rad*rad;
	printf("area of circle:%f",area);
	ci =2* PI *rad;
	printf("cicumference:%f",ci);
	
	
	return 0;
	}
