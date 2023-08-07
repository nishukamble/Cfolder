#include <stdio.h>
int main() 
{
    int N;
    int i=1;
    scanf("%d",&N);
    while (i<=N)
    {
        int j=0;
        while (j<=(N-i))
        {
            printf(" ");
            j=j+1;
        }
        int k=1;
        while(k<=i)
        {
            printf("*");
            k=k+1;
        }
        printf("\n");
        i=i+1;
    }
        return 0;
    }
