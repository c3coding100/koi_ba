#include <stdio.h>

void bubble(int *c, int j) {
    int i, k, h, t;

    for (i = 0; i < j - 1; i++) {
        for (k = 0; k < j - 1; k++) {
            if (c[k] < c[k + 1]) {
                t = c[k];
                c[k] = c[k + 1];
                c[k + 1] = t;
            }
        }
        for (h = 0; h < 10; h++) {
            printf("%d ", c[h]);
        }
        printf("\n");
    }

}

int main(void)
{
    int i, j;
    int c[10];

    for (i = 0; i < 10; i++) {
        scanf("%d", &c[i]);
    }

    bubble(c, 10);

    return 0;
}