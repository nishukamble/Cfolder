#include<stdio.h>
int main()
{
 int n,i;
 int s=0;
 printf("enter the number\n");
 scanf("%d",&n);
 for (i=0; i<=n; i++)
 {
   s=s+i;
 }
   printf("%d",s);
   return 0;
}
