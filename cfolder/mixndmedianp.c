#include <stdio.h>

int main() {
    int a[100] = {1, 3, 5, 7, 9};
    int b[6] = {2, 4, 6, 8, 10, 12};
    int c = 0, c1 = 5, n = sizeof(b) / sizeof b[0];
    int *al = a;
    int *bl = b;
    int nl, n2, median;

    for (int i = n; i < 12; i++) {
        *(al + (i - 1)) = *(bl + c);
        c++;
        c1++;
    }

    for (int i = 0; i < c1; i++) {
        for (int j = i + 1; j < c1; j++) {
            if (*(al + i) > *(al + j)) {
                int temp = *(al + i);
                *(al + i) = *(al + j);
                *(al + j) = temp;
            }
        }
    }

    if (c1 % 2 == 0) {
        nl = c1 / 2;
        n2 = (c1 / 2) - 1;
        c = (nl + n2) / 2;
        median = *(al + c);
    } else {
        c = c1 / 2;
        median = *(al + c);
    }

    for (int i = 0; i < c1; i++) {
        printf("%d, ", *(al + i));
    }

    printf("\nMedian is = %d\n", median);

    return 0;
}
