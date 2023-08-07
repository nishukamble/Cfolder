/*#include<stdio.h>
int main()
{
printf("Enter the value of a\n");
int a[]={1,4,0,2,9,4,5};
int max;
for(int i=1;i<7;i++)
{
if(a[i]>max)
max=a[i];
}
printf("%d",max);
return 0;
}*/

/*#include<stdio.h>
int main()
{
printf("Enter the value of a\n");
int a[]={1,4,0,2,9,4,5};
int max;
for(int i=1;i<4;i++)
{
if(a[0]>max)
max=a[i];
}
printf("%d",max);
return 0;
}*/


/*#include<stdio.h>
#define SIZE 7
int main()
{
int temp[SIZE];
int sum=0;
int avgtemp;
int hottestday=0;
int coldestday=0;
for(int i=0;i<SIZE;i++)
{
printf("Enetr the temp:\n");
scanf("%d",&temp[i]);
}
for(int i=0;i<SIZE;i++)
{
sum=sum+temp[i];
if(temp[hottestday]<temp[i])
{
hottestday=i;
}
if(temp[coldestday]>temp[i])
{
coldestday=i;
}
}
avgtemp=sum/SIZE;
printf("The avg temp %d\n",avgtemp);
printf("The hottest day %d\n",hottestday);
printf("The coldest day %d\n",coldestday);
return 0;
}*/

/*#include<stdio.h>
int main()
{
int a[2][3]={{1,2,3},{4,5,6}};
for(int i=0;i<2;i++)
{
for(int j=0;j<3;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
return 0;
}*/


#include<stdio.h>
#define SIZE 11
int main()
{
int a[SIZE][SIZE];
for(int i=1;i<SIZE;i++)
for(int j=1;j<SIZE;j++)
a[i][j]=i*j;
for(int i=1;i<SIZE;i++)
{
for(int j=1;j<SIZE;j++)
printf("%5d",a[i][j]);
printf("\n");
}
return 0;
}





























