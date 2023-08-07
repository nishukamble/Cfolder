#include<stdio.h>
	int main()
{
	char name[5][10];
	int i;
	for(i=0;i<5; i++)
	{
	printf("enter name_%d",i+1);
	scanf("%s",name[i]);
	}
	for(i=1; i<5; i++)
	{
	printf("enter name_%d name",i+1);
	scanf("%s",name[i]);
	}
	return 0;
}
