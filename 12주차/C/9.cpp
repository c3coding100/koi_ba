#include <cstdio>

int main(void)
{
    int a, b;
    FILE *in, *out;
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    fscanf(in, "%d%d", &a, &b);
    fprintf(out, "%d", a + b);

    fclose(in);
    fclose(out);
    return 0;
}