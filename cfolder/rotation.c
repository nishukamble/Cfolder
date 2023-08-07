#include<stdio.h>
int main()
{
	int n,k,p,j,count_l1;
	scanf("%d",&n);
	int L[n],L1[n];
	scanf("%d",&k);
	p=k-1;
	i=0;
	count_l1=0;
	while(i<n)
	{
	if(i==p)
	{
	L1[count_l1]=L[i];
	count_l1++;
	j=p;
	while(j<n-1)
	{
	L[j] = L[j+1];
	j++;
	}
	x=0;
	while(x<n-1)
	{
	L[j] = L[j+1];
	j++;
	}
	}
