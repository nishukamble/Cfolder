#include<stdio.h>
int main()
{
int a=10;
int *p;
char *q;
q=&a;

printf("%p\n",q);
printf("%d\n",*q);
printf("%p\n",q+1);
return 0;
}
