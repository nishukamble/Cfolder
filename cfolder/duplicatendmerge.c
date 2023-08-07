#include <stdio.h>
int main()
{
int array1[5]={1,2,3,4,5};
int array2[5]={2,3,6,3,7};
int array3[100];
int i,c=0;
for (int i=0; i<5; i++)
{
array3[c]=array1[i];
c++;
}
for (int j=0; j<5; j++)
{
array3[c]=array2[j];
c++;
}
for(int i=0; i<c; i++)
{
int count=0;
for(int j=i+1; j<c; j++)
{
if (array3[i]==array3[j])
{
count=count+1;
}
}
if (count==1)
{
printf(" %d",array3[i]);
}
}
}
