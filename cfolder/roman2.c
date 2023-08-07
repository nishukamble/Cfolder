#include <stdio.h> 
#include <string.h>
int main()
{   
	int n, p,count_s=0;
	char s[100];
	scanf("%d",&n);
		
	int A[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
	char B[13][3] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	for(int i=0; i<13; i++)
	{
		if(n>=A[i])
		{
			p=n/A[i];
		
		for(int j=0;j<p;j++)
		{
			strcat(s,B[i]);
			//count_s+=strlen(B[i]);
		}
		}
		n=n%A[i];
		if(n==0)
		{
		   i=i+13;
		}
	}
	printf("%s",s);
return 0;
}
