#include <cstdio>

int main(void)
{
    int i;
    char c;

    int *pi = &i;
    char *pc = &c;
    printf("%#p %#p", pi, pc);

    return 0;
}