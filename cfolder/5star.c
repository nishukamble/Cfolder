#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,i,j;
int **arr=(int**)malloc(n*sizeof(int*));
scanf("%d",&n);
for(i=1; i<=n; i++)
{
for(j=n; j>=i; j--)
{
printf("*");
}
printf("\n");
}
return 0;
}
