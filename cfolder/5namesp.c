#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100][20];
	char *ptr=arr;
	char *string=arr;
	strcpy(arr[0],"hello, world!");
	{
		printf("%s",arr[0]);
	}
	return 0;
}

