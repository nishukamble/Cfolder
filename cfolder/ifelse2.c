 #include <stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	if(90<=m)
	{if (m<=100)
	{printf("grade %d is x\n",m);}}
	 else if(75<=m)
	 {if (m<=89)
	 {printf("grade %d is A\n",m);}}
	 else if (60<=m)
	 {if  (m<=74)
	 {printf("grade %d is B\n",m);}}
	 else if (45<=m)
	 {if (m<=59)
	 {printf("grade %d is C\n",m);}}
	 else
	 {printf("grade %d is fail\n",m);}}
