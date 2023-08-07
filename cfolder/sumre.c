#include <stdio.h>
int sum(int n)
{
    if (n > 5)
     {
        return 0;  
    } 
    else 
    {
        return n + sum(n + 1);  
    }
}

int main()
{
    printf("Sum of n numbers: %d\n", sum(1));
    return 0;
}

