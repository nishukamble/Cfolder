#include<stdio.h>
int main()
  {
	long n,count=1,i,j;
	printf("Enter the value for N\n");
	scanf("%ld",&n);
	long arr[n][n];
	
        for(i=0;i<n;i++)
        {
                 for(j=i;j<n-i;j++)
                       arr[i][j]=count++;
                       
                 for(j=i+1; j<n-i;j++)
                      arr[j][n-i-1]=count++;
                      
                 for (j=n-i-2; j>=i; j--)
                      arr[n-i-1][j]=count++;
                      
                 for(j=n-2-i; j>=i+1; j--)
                       arr[j][i]= count++;
         }
          for(i=0; i<n; i++)
          {
                for(j=0; j<n; j++)
                {
              
                	     
                	 
                	      printf("%2ld ",arr[i][j]);
                 }
                 
                 printf("\n");
         } 
          return 0;
 }
