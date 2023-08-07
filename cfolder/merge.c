 #include<stdio.h>
int main()
{
	int array1[5]={1,2,3,4,5};
	//int n1=size(array1)/size of array1[0]);
	//int n2=size(array2)/size of array2[0]);
	int array2[5]={6,7,8,9,10};
	int array3[100];
	int c=0;
	for(int i=0;i<5; i++)
	{
	array3[c]=array1[i];
	c++;
	}
	for (int j=0; j<5; j++)
	{
	array3[c]=array2[j];
	c++;
	}
	for (int i=0;i<c; i++)
	{
	printf("%d",array3[i]);
	}
	return 0;
	}
