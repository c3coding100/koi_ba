#include <cstdio>
#include <cstdlib>

int main(void)
{
    int i, j, t, n;
    scanf("%d", &n);
    int *p = new int[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (p[i] < p[j]) {
                t = p[i];
                p[i] = p[j];
                p[j] = t;
            }
        }
    }

    printf("max : %d\n", p[0]);
    printf("min : %d\n", p[n - 1]);

    delete[] p;

    return 0;
}