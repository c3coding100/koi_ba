#include <stdio.h>

void recur(int n)
{
    n--;
    if (n > 0) {
        recur(n);
    }
    printf("recursive\n");
}

int main(void)
{
    int i;
    scanf("%d", &i);
    recur(i);

    return 0;
}