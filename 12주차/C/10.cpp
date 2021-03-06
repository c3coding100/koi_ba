#include <cstdio>

int main(void)
{
    FILE *in, *out;
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    double a = 0, b = 0;
    fscanf(in, "%lf %lf", &a, &b);
    fprintf(out, "%.2lf %.2lf %.2lf", a, b, a + b);

    fclose(in);
    fclose(out);
    return 0;
}