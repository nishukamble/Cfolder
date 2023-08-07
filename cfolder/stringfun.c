/*#include<stdio.h>
#include<string.h>
int main()
{
int count=0;
char name[30];
printf("enter name:");
gets(name);
count=strlen(name);
printf("string length is %d",count);
return 0;
}*/


/*#include<stdio.h>
#include<string.h>
int main()
{
char name[30];
int count=0,i=0;
printf("enter name:");
gets(name);
while(name[i]!='\0')
{
	count++;
	i++;
}
printf("the length is:%d",count);
return 0;
}*/


/*#include<stdio.h>
#include<string.h>
int main()
{
char s1[30]="Nish";
char s2[7]="Kamble";
strcat(s1,s2);
printf("%s",s1);
return 0;
}*/


/*#include<stdio.h>
#include<string.h>
int main()
{
int l1,l2,i;
char s1[30]="Nish";
char s2[]="Kamble";
l1=strlen(s1);
l2=strlen(s2);
for(i=0;i<=l2;i++)
{
	s1[l1+i]=s2[i];
}
printf("string concate is:%s",s1);
return 0;
}*/


/*#include<stdio.h>
#include<string.h>
int main()
{
int value;
char s1[30],s2[30];
printf("enter string s1:");
gets(s1);
printf("enter string s2:");
gets(s2);
value = strcmp(s1,s2);
if (value==0)
	printf("same");
else
	printf("not same");
}*/


/*#include<stdio.h>
#include<string.h>
int main()
{
int flag=0,i;
char s1[30],s2[30];
printf("enter string s1:");
gets(s1);
printf("enter string s2:");
gets(s2);
for(i=0;s1[i]!='\0' || s2[i]!='\0';i++)
{
	if(s1[i]!=s2[i])
	{
		flag=1;
		break;
	}
}
if(flag==0)
	printf("same");
else
	printf("not same");
}*/
		

//without using gets we only use scanf		
/*#include<stdio.h>
#include<string.h>
int main()
{
char s1[30],s2[30];
printf("enter string s1:");
scanf("%s",s1);
printf("enter string s2:");
scanf("%s",s2);
printf("%s  %s",s1,s2);
}*/


/*#include<stdio.h>
#include<string.h>
int main()
{
int l,i;
char s1[30],c;
printf("enter string:");
scanf(" %s",s1);
l=strlen(s1);
for(i=0;i<l/2;i++)
{
	c=s1[i];
	s1[i]=s1[l-1-i];
	s1[l-1-i]=c;
	}
printf("%s",s1);
}*/

	


/*#include<stdio.h>
#include<string.h>
int main()
{
int i;
char s1[30];
printf("enter string:");
gets(s1);
for(i=0;s1[i]!='\0';i++)
{
	if(s1[i]>='A' && s1[i]<='Z')
	{
		s1[i]=s1[i]+32;
	}
}
printf("string is:%s",s1);
}*/	



















