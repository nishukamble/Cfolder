/*#include<stdio.h>
int main()
{
int n,a1,d;
scanf("%d%d%d",&n,&a1,&d);
a1+(n-1)*d;
printf("nth terms are:%d",a1+(n-1)*d);
return 0;
}*/


/*#include<stdio.h>
int main()
{
int a1,an,n,sn;
scanf("%d%d%d",&a1,&an,&n);
sn=(a1+an)*n/2;
printf("sn term is:%d",sn);
return 0;
}*/


/*#include<stdio.h>
int main()
{
int salary,totalhrs,monthlysalary;
scanf("%d%d",&salary,&totalhrs);
monthlysalary=salary*totalhrs;
printf("Total salary:%d",monthlysalary);
return 0;
}*/


/*#include<stdio.h>
int main()
{
int distance,speed,time;
scanf("%d%d",&distance,&speed);
time = distance/speed;
printf("car reached in :%d",time);
return 0;
}*/


/*#include<stdio.h>
int main()
{
int totalseconds,hours,minutes,remainingseconds;
printf("Enter total seconds:");
scanf("%d",&totalseconds);
hours=totalseconds/3600;
minutes=(totalseconds-hours*3600)/60;
remainingseconds=(totalseconds-hours*3600)%60;
printf("total hours:%d\n",hours);
printf("total minutes:%d\n",minutes);
printf("total reminingseconds:%d\n",remainingseconds);
return 0;
}*/


/*#include<stdio.h>
int main()
{
float num;
scanf("%f",&num);
printf("enter num:%d\n",(int)num);
printf("the decimal part after float - %.1f\n",num-(int)num);
return 0;
}*/


/*#include<stdio.h>
int main()
{
int a,b,c,sum;
printf("enter numbers\n");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
printf("sum is:%d",sum);
return 0;
}*/


/*#include<stdio.h>
int main()
{
int a,b,c,reverse;
printf("enter numbers\n");
scanf("%d%d%d",&a,&b,&c);
reverse=c==b==a;
printf("reverse num are:%d%d%d",c,b,a);
return 0;
}*/


/*#include<stdio.h>
#include<math.h>
int main()
{
int x1,x2,y1,y2,distance;
printf("enter the distance\n");
scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
distance=sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
printf("ditance is: %d",distance);
return 0;
}*/


#include<stdio.h>
#include<math.h>
int main()
{
int x;
int x2,x4,x6,x8;
printf("enter the x value\n");
scanf("%d",&x);
x2=x*x;
x4=x*x*x*x;
x6=x*x*x*x*x*x;
x8=x*x*x*x*x*x*x*x;
printf("x^2=%d\nx^4=%d\nx^6=%d\nx^8=%d\n",x2,x4,x6,x8);
return 0;
}







