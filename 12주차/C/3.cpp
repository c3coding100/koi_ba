#include <stdio.h>

int main(void)
{
    int i;
    double a[5] = { 0, };

    for (i = 0; i < 5; i++)
        scanf("%lf", &a[i]);

    for (i = 0; i < 5; i++) {
        printf("%.1lf ", *(a + i));
    }
    return 0;
}