#include <cstdio>
#include <cstdlib>

int main(void)
{
    char c = 0;

    int *p1 = (int*)malloc(sizeof(int));
    int *p2 = (int*)malloc(sizeof(int));
    int *p3 = (int*)malloc(sizeof(int));

    scanf("%d%d", p1, p2);
    if (*p1 > *p2)
        *p3 = *p1 - *p2;
    else
        *p3 = *p2 - *p1;

    printf("%d", *p3);

    free(p1);
    free(p2);
    free(p3);

    return 0;
}