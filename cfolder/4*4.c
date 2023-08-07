#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[4][4],i,j,r,c,row,col;
	int **arr=(int**)malloc(4*sizeof(int*));
	r=0,c=0,row=3,col=3;
	printf("enter the elements\n");
	for(i=0; i<4; i++)
	for(j=0; j<4; j++)
	scanf(" %d",&a[i][j]);

	for(i=0; i<4; i++)
	{
	for (j=0; j<4; j++)
	printf(" %d",a[i][j]);
	printf("\n");
	}
	for(i=c; i<=col; i++)
	printf(" %d",a[r][i]);
	r++;
	
	for(i=r; i<=row; i++)
	printf(" %d",a[i][col]);
	col--;
	
	for(i=col; i>=c; i--)
	printf("4%d",a[row][i]);
	row--;
	
	for(i=row; i>=r;i--)
	 printf("4%d",a[i][c]);
	 c++;
	return 0;
}
