/*#include <stdio.h>
int main()
{
int a;
scanf("%d",&a);
printf("a*2=%d\n",a*a);
printf("a^3=%d\n",a*a*a);
return 0;
}*/


/*#include <stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
while(int i<n)
{
printf("*");
i=i+1;
}
return 0;
}*/


/*#include <stdio.h>
int main()
{
int a,pow;
int tempPow;
int result =1;
scanf("%d%d",&a,&pow);
tempPow=pow;
while(pow>0)
{
result=result*a;
pow--;
}
printf("%d in the power of %d:\n%d",a,tempPow,result);
return 0;
}*/


/*#include <stdio.h>
int main()
{
int a;
int totalsum=0,gradecount=0;
scanf("%d",&a);
while(a!=-1)
{
totalsum=totalsum+a;
gradecount++;
printf("plz enter ur grades or '-1' to stop:");
printf("%d",a);
scanf("%d",&a);
}
printf("u have netered %d grades!\n",gradecount);
printf("and ur AVRAGE GRADE is %f\n",(float)totalsum/gradecount);
return 0;
}*/


/*#include <stdio.h>
int main()
{
int gd;

do
{
printf("receives a gd\n");
scanf("%d",&gd);
}
while(gd<0 || gd>100);
printf("Thanks!You've inserted 90,which is a legit grade\n",gd);
return 0;
}*/


/*#include <stdio.h>
int main()
{
int a,pow;
int result =1;
scanf("%d%d",&a,&pow);
for(int i=1;i<=pow;i++)
{
result = result *a;
}
printf("%d in the power of %d:\n%d",a,pow,result);
return 0;
}*/


/*#include <stdio.h>
int main()
{
int a;
scanf("%d",&a);
for(int i=0;i<=1000;i++)
{
printf("I'm sorry for not listening to my Techer.I will practise more next time!\n");
}
return 0;
}*/



/*#include <stdio.h>
int main()
{
int a;
printf("Enter no\n");
scanf("%d",&a);

for(int i=1;i<=a;i++)
{
for(int j=1;j<=i;j++)
printf("%d",j);
printf("\n");
}
return 0;
}*/



/*#include <stdio.h>
int main()
{
int a;
scanf("%d",&a);
for(int i=1;i<a;i++)
{
if(i==6)
continue;
{
printf("%d",i);
}
}

return 0;
}*/


#include <stdio.h>
int main()
{
int a;
printf("Enter no\n");
scanf("%d",&a);

for(int i=1;i<=a;i++)
{
for(int j=1;j<=i;j++)
printf("%d",i);
printf("\n");
}
return 0;
}















