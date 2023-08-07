#include<stdio.h>
int main()
{  
  int arr[7]={3,4,5,6,7,8,9};
  int total_pairs =0;
  int x =12;
  for(int i=0;i<7;i++)
    {
       for(int j=i+1;j<7;j++)
       {
         if (arr[i]+arr[j]==x)
           {  
              total_pairs+=1;
              printf("(%d %d)",arr[i],arr[j]);
            }
        }
     }
     printf("total pairs=%d",total_pairs);
     return 0;
 }*/   
  
  
