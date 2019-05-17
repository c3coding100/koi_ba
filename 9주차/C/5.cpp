#include <stdio.h>

int sum(int n)
{
    if (n >= 0) {
        return n + sum(n - 1);
    }
    return 0;
}

int main()
{
    int N = 0;
    scanf("%d", &N);
    printf("%d", sum(N));
    return 0;
}