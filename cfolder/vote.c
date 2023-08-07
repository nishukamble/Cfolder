#include <stdio.h>
int main()
{
int age;
printf("enter age");
scanf("%d",&age);
if 

(age>=18 && age<=65)
{
printf(" eligible for vote but he is not  senior citizen\n");
}


else if 

(age>=18 && age>=65)
{
printf("eligible for vote and he is senior citizen\n");
}



else
{
printf("not both\n");
}
return 0;
}
