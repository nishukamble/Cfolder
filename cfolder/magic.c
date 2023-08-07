#include<stdio.h>
int main()
{
 	int n,count,i,j;
  	scanf("%d",&n);
 	int arr[n][n];
  	for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
      {
        arr[i][j]=0;
      }
   }

  count=1;
  i=0;
  j=(n-1)/2;
  arr[i][j]=count;
  while(count<=n*n)
    {
      
                                                                        
        count++;
        if((i==0) && (j==n-1)) 
          {
            i=i+1;
            }
        else if(i==0)
        {
          i=n-1;
          j=j+1;
          }
        else if(j==(n-1))
        {
           i=i-1;
           j=0;
          }
        else if(arr[i-1][j+1]!=0)
        {
          i++;
        }
        else
        {
          i--;
          j++;
          }
     arr[i][j]=count;
    }
    
   
   
for(int i=0;i<n;i++)
      {
         for(int j=0;j<n;j++)
           {
             printf("%5d",arr[i][j]);
            }
      printf("\n");
      }
     return 0;
 }
[1
