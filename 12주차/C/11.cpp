#include <cstdio>

int main(void)
{
    FILE *in, *out;
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    int a[1000] = { 0, };

    int cnt = 0;
    while (1) {
        int i;
        fscanf(in, "%d", &i);
        if (i == 0)
            break;
        if (i % 3 == 0 && i % 5 == 0) {
            a[cnt++] = i;
        }
    }

    for (int i = 0; i < cnt; i++) {
        fprintf(out, "%d ", a[i]);
    }

    fprintf(out, "%d", cnt);

    fclose(in);
    fclose(out);
    return 0;
}