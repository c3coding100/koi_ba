#include <cstdio>
#include <cstring>

int main(void)
{
    FILE *in, *out;
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    char a[100] = { 0, };
    char b[100] = { 0, };
    char t[100] = { 0, };

    fgets(a, 100, in);
    fgets(b, 100, in);
    if (strlen(a) > strlen(b)) {
        strcpy(t, a);
        strcpy(a, b);
        strcpy(b, t);
    }

    fprintf(out, "%s", a);
    fprintf(out, "%s", b);

    fclose(in);
    fclose(out);
    return 0;
}