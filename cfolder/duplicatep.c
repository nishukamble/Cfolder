#include <stdio.h>
int main()
{
int i;
int arr[8]={1,2,2,4,3,2,1,1};
int *ptr=arr; 
int length=sizeof(arr);
	printf("duplicate numbers=");
	for(i=0; i<8; i++)
	{
	for(int j=i+1; j<8; j++)
	{
	if(arr[i]==arr[j])
	{
	printf(" %d",*(ptr+j));
	}
	} 
	}
	return 0;
	}
