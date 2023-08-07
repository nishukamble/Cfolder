/*#include<stdio.h>
int main()
{
int n;
printf("Enter the no:");
scanf("%d",&n);
if (n%2==0)
printf("even\n");
else 
printf("odd\n");
return 0;
}*/

/*#include<stdio.h>
int main()
{
int n1,n2;
printf("Enter the n1:\n");
printf("Enter the n2:\n");
scanf("%d",&n1);
scanf("%d",&n2);
if (n1>n2)
{
printf("max=%d\n",n1);
printf("min=%d\n",n2);
}
else 
{
printf("max=%d\n",n2);
printf("min=%d\n",n1);
}
return 0;
}*/

/*#include<stdio.h>
int main()
{
int n1,n2,n3;
printf("Enter the n1:\n");
printf("Enter the n2:\n");
printf("Enter the n3:\n");
scanf("%d",&n1);
scanf("%d",&n2);
scanf("%d",&n3);
if (n2>n3)
{
printf("max=%d\n",n2);
printf("min=%d\n",n3);
}
else 
{
printf("max=%d\n",n3);
printf("min=%d\n",n2);
}
return 0;
}*/


/*#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b;
char mathOperation;
printf("Enter the operations u use:('+','-','*','%'");
scanf("%c",&mathOperation);
printf("Enter the value of a and b:\n");
scanf("%d%d",&a,&b);
switch(mathOperation)
{
case '+':
printf("%d %c %d =%d\n",a ,mathOperation ,b,a+b);
break;
case '-':
printf("%d %c %d =%d\n",a ,mathOperation ,b,a-b);
break;
case '*':
printf("%d %c %d =%d\n",a ,mathOperation ,b,a*b);
break;
case '/':
if(b==0)

printf("you cannot divide by 0!\n");
else
printf("%d %c %d =%d\n",a ,mathOperation ,b,a/b);

break;
case '%':
if(b==0)

printf("you cannot divide by 0!\n");
else
printf("%d %c %d =%d\n",a ,mathOperation ,b,a%b);

break;
default:
printf("Wrong mathematical operation..Try again\n");
break;
}
return 0;
}*/


/*#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
if(a==b)
{
printf("true\n");
}
else
{
printf("false\n");
}
return 0;
}*/


/*#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
if(a>=10 && a<=99)
{
printf("double digit\n");
}
else if(a>=100 && a<=999)
{
printf("triple digit\n");
}
else 
{
printf("neither single digit,nor double digit\n");
}
return 0;
}*/


/*#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
printf("|%d|",a);
return 0;
}*/



/*#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
if(a>0 && b>0)
{
printf("%d %d:first quadrant\n",a,b);
}
else if(a<0 && b>0)
{
printf("%d %d:second quadrant\n",a,b);
}
else if(a<0 && b<0)
{
printf("%d %d:third quadrant",a,b);
}
else if(a>0 && b<0)
{
printf("%d %d:fourth quadrant\n",a,b);
}
else
{
printf("ithe point is located at (0,0)\n");
}
return 0;
}*/


/*#include<stdio.h>
int main()
{
int a;
printf("Enter the month number\n");
scanf("%d",&a);
if(a==1)
{
printf("jan\n");
}
else if(a==2)
{
printf("feb\n");
}
else if(a==3)
{
printf("march\n");
}
else if(a==4)
{
printf("april\n");
}
else if(a==5)
{
printf("may\n");
}
else if(a==6)
{
printf("june\n");
}
else if(a==7)
{
printf("july\n");
}
else if(a==8)
{
printf("august\n");
}
else if(a==9)
{
printf("sept\n");
}
else if(a==10)
{
printf("oct\n");
}
else if(a==11)
{
printf("nov\n");
}
else 
{
printf("dec\n");
}
return 0;
}*/


/*#include<stdio.h>
int main()
{
int totalsec;
printf("enter sec:\n");
scanf("%d",&totalsec);
int hr=totalsec/3600;
int min=(totalsec-hr*3600)/60;
int remainingsec=(totalsec-hr*3600)%60;
if(hr<10)
printf("0");
printf("%d:",hr);
if(min<10)
printf("0");
printf("%d:",min);
if(remainingsec<10)
printf("0");
printf("%d\n",remainingsec);
return 0;
}*/


/*#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three num:\n");
scanf("%d%d%d",&a,&b,&c);
if((a%b==0 || b%a==0) && (b%c==0 || c%b==0) && (a%c==0 || c%a==0))
{
printf("divisible\n");
}
else
{
printf("not divisible\n");
}
return 0;
}*/


/*#include<stdio.h>
int main()
{
int a;
printf("Enter the yr\n");
scanf("%d",&a);
if(a%4 && a%400)
{
printf("%d is a leap yr\n",a);
}
else
{
printf("%d is not leap yr\n",a);
}
return 0;
}*/


/*#include<stdio.h>
int main()
{
int a,b,c;
printf("The day will be:\n");
scanf("%d%d%d",&a,&b,&c);
if(a<=31)
{
printf("%d",a+1);
}
else
{
printf("%d",0);
}
return 0;
}*/


/*#include<stdio.h>
int main()
{
int day,yr,mon;
printf("enter day\n");
printf("enter yr\n");
printf("enter mon\n");
scanf("%d%d%d",&day,&yr,&mon);
printf("0*%X\n0*%X\n0*%X",day,yr,mon);
return 0;
}*/



#include<stdio.h>
int main()
{
char mychar;
printf("enter char\n");
scanf("%c",&mychar);
if(mychar>='A' && mychar<='Z')
{
printf("uppercase\n");
}
else if(mychar>='a' && mychar<='z')
{
printf("lowercase\n");
}
else if(mychar>='0' && mychar<='9')
{
printf("digit\n");
}
else
{
printf("other..!\n");
}
return 0;
}

























































