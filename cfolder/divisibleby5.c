 #include<stdio.h>
int main()
{
int a;
printf("enter the number\n");
scanf("%d",&a);
if (a%5==0 && a%11==0)
{
printf("both\n");
}
else if (a%5==0)
{
printf("5");
}
else if (a%11==0)
{
printf("11");
}
else
{
printf("not divisible by 5");
}
return 0;
}
