#include <stdio.h>
int main() 
{
    int N,i=1,fact=1;
    scanf("%d",&N);
    for (i=1;i<=N;fact=fact*i)
    {
        
        printf("%d",fact);
    }
    return 0;
}
