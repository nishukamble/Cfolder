#include<stdio.h>
int main()
{
  int a[100]={1,3,5,7,9};
  int b[6]={2,4,6,8,10,12};
  int c=0,c1=5,i,n=sizeof(b)/sizeof b[0];
  for(i=n;i<12;i++)
  {  
    a[i-1]=b[c];
    c++;
    c1++;
   }
   
   for(int i=0;i<c1;i++)
   { 
      int temp;
      for(int j=i+1;j<c1;j++)
       {
          if(a[i]>a[j])
          { 
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
           
       }
   }
   
   for(int i=0;i<c1;i++)
   {
      printf("%d,",a[i]);
      
    }
    return 0;
 }
