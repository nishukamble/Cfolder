#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j;
	int **arr=(int**)malloc(3*sizeof(int*));
	for (int i=0;i<3;i++)
	{
		*(arr+i)=(int*)malloc(3*sizeof(int*));
		for (int j=0;j<3;j++)
	 	 {
	   		scanf("%d",(*(arr+i)+j));
	 	 }
	}
	for(int i=0; i<3; i++)
	 {
	 	for(int j=0;j<3;j++)
		{
	   		printf("%d\t",*(*(arr+i)+j));
	   	}
	   	printf("\n");
         }
         for(int i=0; i<3; i++)
         {
         	free(arr[i]);
         }
         free(arr);
         return 0;
}	
