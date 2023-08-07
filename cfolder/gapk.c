#include<stdio.h>
int main() {
int i, n, k, count, count_k;
scanf("%d", &n);
int a[n], b[n]; 
for(i=0; i<n;i++) 
{
  scanf("%d", &a[i]); 
  b[i]=0;
 }
scanf("%d", &k);
count = 0;
i = 0; 
count k = 0;
while (count<n)
{
  if (b[i] = 0) 
   { 
     if(count_k=k-1) 
      {
        printf("%d ", a[i]);
        b[i] = 1;
        count++;
       }
       count k = (count_k + 1) % k;
    }
    i = (i+1) % n;
}

return 0;
}  

