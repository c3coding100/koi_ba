#include <stdio.h>

#define square(x) (x)*(x) 
#define square3(x) (x)*(x)*(x)

int main(void)
{
    int i, j;
    int c[10];

    scanf("%d", &i);
    scanf("%d", &j);

    printf("(%d - %d) ^ 2 = %d\n", i, j, square((i - j)));
    printf("(%d + %d) ^ 3 = %d\n", i, j, square3((i + j)));

    return 0;
}