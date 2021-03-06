#include <cstdio>

int main(void)
{
    FILE *in, *out;
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    int a[100][3] = { 0, };
    double d[100] = { 0, };

    int n;
    fscanf(in, "%d", &n);

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < 3; k++) {
            fscanf(in, "%d", &a[i][k]);
        }
        d[i] = (double)(a[i][0] + a[i][1] + a[i][2]) / 3;
    }

    double t;
    for (int i = 0; i < n - 1; i++) {
        for (int k = i + 1; k < n; k++) {
            if (d[i] < d[k]) {
                t = d[i];
                d[i] = d[k];
                d[k] = t;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        fprintf(out, "%.1lf\n", d[i]);
    }

    fclose(in);
    fclose(out);
    return 0;
}