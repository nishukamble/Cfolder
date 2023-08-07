# include <stdio.h>
int main()
{
  int n,item,low,high,mid,guess;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
   { 
     scanf("%d",&arr[i]);
    }
    scanf("%d",&item);
    low=0;
    high=n-1;
    if(low<=high)
    { 
     mid=(low+high)/2;
     guess=arr[mid];
        if(guess==item)
        {
          printf("%d",mid);
       
        if(guess>item)
          {
            high=mid-1;
           }
        else
        {
          low=mid+1;
        }
        }
      }
    else {
       printf("There is no element");
     }
    return 0;
} 
