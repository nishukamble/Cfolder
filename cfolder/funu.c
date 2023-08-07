/*#include<stdio.h>
int addnum(int a, int b, int c)
{
  int sum=a+b+c;
  return sum;
}
int main()
{
 int a,b,c;
 printf("Enter the numbers:");
 scanf("%d %d %d",&a,&b,&c);
 int sum = addnum(a,b,c);
 printf("%d",sum);
 return 0;
}*/
 
 
/*#include <stdio.h>
int minmaxBetween2()
{
int a,b;
printf("enter a and b\n");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("max is:%d\n",a);
printf("min is:%d\n",b);
}
else
{
printf("max is:%d\n",b);
printf("min is:%d\n",a);
}
}
int main()
{
int a,b;
minmaxBetween2();
return 0;
}*/


/*#include <stdio.h>
int areaofrect()
{
int height,width,area;
printf("enter height and width\n");
scanf("%d%d",&height,&width);
area=height*width;
printf("%d",area);
}
int main()
{
int height,width,area;
areaofrect();
return 0;
}*/


/*#include <stdio.h>
int maxdigit()
{
int a;
printf("Enter the value of a\n");
scanf("%d",&a);
if(a>99 || a<10)
printf("The no is not a two digit no\n");
else 
{
if(a%10 > a/10)
printf("max=%d\n:%d",a,a%10);
else
printf("max=%d\n:%d",a,a/10);
}
}
int main()
{
int a;
maxdigit();
return 0;
}*/


/*#include <stdio.h>
int fact(int a)
{

int result=1;
if(a<0)
return-1;
for(int i=1;i<=a;i++)
{
result=result*i;
}
return result;
}
int main()
{
int b;
printf("Enter the value of b:\n");
scanf("%d",&b);
printf("Fact (%d)= %d\n",b,fact(b));
return 0;
}*/


#include <stdio.h>
int Iseven()
{
int a;
if(a%2==0)
return 1;
else
return 0;
}
int main()
{
int a;
printf("Enter the value of a:\n");
scanf("%d",&a);
int result=Iseven(a);
if(result==1)
printf("%d\n",1);
else
printf("%d\n",0);
return 0;
}































