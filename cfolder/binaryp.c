#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,a,mid;
	scanf("%d",&a);
	scanf("%d",&n);
	int *l=(int*)malloc(n*sizeof(int));
	//int *ptr =l;
	for (int i=0; i<n; i++)
 	{
 		//scanf("%d",&i);
 		scanf("%d",l+i);
 	}
 	int low=0,guess;
 	int high=n-1;
 	while (low<=high)
	{ 
		mid=(low+high)/2;
		guess=*(l+mid);
		//guess=*(l+mid);
		if (guess==a)
		{ 
			printf("the number is at the %dth location",mid);
	  		return 0;
		}
	  	else if (guess>a)
	  	{
	  		high=mid-1;
	  	}
	        else 
	  	{
	  		low=mid+1;
	        }
	}
	free(l);
	printf("there is no element you enter in the list");
	return 0;
}
