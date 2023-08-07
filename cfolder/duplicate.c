#include <stdio.h>
int main()
{
 int i,j,n;
 scanf("%d\n",&n);
 int l[n];
 for (i=0;i<n;i++)
 {
  scanf("%d\n",&l[i]);
 }
 for (i=0;i<n;i++)
 {
    int c=0;
    for (j=i+1;j<n;j++)
    {
      if (l[i]==l[j])
      {
        c++;
        if (c==1)
        {
           printf("duplicate value:%d\n",l[j]);
        }
      }
    }
 }
  return 0; 
}  
        
        
