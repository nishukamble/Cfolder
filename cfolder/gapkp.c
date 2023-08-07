#include<stdio.h>
int main() {
int i, n, k, count, countk;
scanf("%d", &n);
int a[n], b[n];
int *ptr1=a;
int *ptr2=b; 
for(i=0; i<n;i++) 
{
  scanf("%d",(ptr2+i)); 
  *(ptr2+i)=0;
 }
scanf("%d", &k);
count = 0;
i = 0; 
countk=0;
while (count<n)

{
  if (*(ptr2)+i== 0)
   { 
     if(countk==k-1) 
      {
        printf("%d ",*(ptr2+i));
        *(ptr2+i) = 1;
        count++;
       }
       countk=(countk+1)%k;
    }
    i = (i+1) % n;
}
return 0;
}  

  
  
  
