  #include<stdio.h>
int main()
{
	int i;
	int arr[6]={1,2,3,4,5,6};
	printf("enter the elements of array\n");
	for (i=0; i<6; i++)
	scanf("%d",&arr[i]);
	printf("alternate elements\n");		
	for (i=0; i<6; i+=2)
	printf(" %d",arr[i]);
	return 0;
	}
