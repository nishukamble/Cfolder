#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int *ptr=(int*)malloc(n*sizeof(int));
	for (int i=n-1; i>0; i--)
		{
		printf(" %d",(*ptr)+i);
		}
		
		return 0;
}








