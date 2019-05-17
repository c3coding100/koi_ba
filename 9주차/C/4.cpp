#include <stdio.h>

void recur(int n)
{
    printf("%d ", n);
    n--;
    if (n > 0) {
        recur(n);
    }
}

int main(void)
{
    int i;
    scanf("%d", &i);
    if (i <= 50)
        recur(i);

    return 0;
}