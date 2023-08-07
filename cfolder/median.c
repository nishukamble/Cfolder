/*#include <stdio.h>
int main()
{ 
 int n,mean,sum=0,c,n1,n2,median;
 scanf("%d",&n);
 int arr[n];
 for (int i=0;i<n;i++)
 { 
   scanf("%d",&arr[i]);
   sum+=arr[i];
 }
 mean=(sum/n);
 printf("Mean = %d \n",mean);
 if(n%2==0)
  {  
     n1=n/2;
     n2=(n/2)-1;
     c=(n1+n2)/2;
     median=arr[c];
   }
   
  else
  { 
     c=n/2;
     median=arr[c];
    }
 printf("Median is = %d \n",median);
 int d[100],max=0;
 for(int i=0;i<n;i++)
   { int c11=0;
     for(int j=(i+1);j<n;j++)
      {
        if(arr[i]==arr[j])
     {
       c11++;
     }
     }
 if (c11>max)
   {
     max=c11;
      }
   }
   for (int i=0; i<n; i++) {
       int co=0;
       for (int j=(i+1); j<n; j++) {
           if (arr[i]==arr[j]) {
               co=co+1;
           }
       }
       if (max==co) {
          printf("Mode = %d \n",arr[i]);
       }
    }
    return 0;
 }  */



 
