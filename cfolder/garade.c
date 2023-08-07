/*#include<stdio.h>
int main()
{
int grade1,grade2,grade3;
float average;
printf("Enter grade1\ngrade2\ngrade3\n");
scanf("%d%d%d",&grade1,&grade2,&grade3);
average=(grade1+(float)grade2+grade3)/3;
printf("average %.2f",average);
return 0;
}*/

#include <stdio.h>
void swapFloat(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    float float1 = 3.14;
    float float2 = 2.718;

    // Printing the values before swapping
    printf("Before swapping:\n");
    printf("float1 = %f\n", float1);
    printf("float2 = %f\n", float2);

    // Swapping the values
    swapFloat(&float1, &float2);

    // Printing the values after swapping
    printf("\nAfter swapping:\n");
    printf("float1 = %f\n", float1);
    printf("float2 = %f\n", float2);

    return 0;
}



