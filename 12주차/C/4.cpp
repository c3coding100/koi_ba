#include <cstdio>

int main(void)
{
    int a[10];
    int odd = 0;
    int even = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d ", &a[i]);
        if (a[i] & 1) {
            odd++;
        }
        else {
            even++;
        }
    }

    printf("odd : %d\n", odd);
    printf("even : %d\n", even);

    return 0;
}