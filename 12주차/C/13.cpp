#include <cstdio>

typedef struct {
    char name[20];
    int  score;
    int  rank;
} Student;

int main(void)
{
    Student a[10];

    FILE *in, *out;
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    for (int i = 0; i < 10; i++)
        fscanf(in, "%s%d", a[i].name, &a[i].score);

    for (int i = 0; i < 10; i++)
    {
        int cnt = 1;
        for (int k = 0; k < 10; k++)
        {
            if (a[i].score < a[k].score) cnt++;
        }
        a[i].rank = cnt;
    }

    fprintf(out, "Name Score Rank\n");
    for (int i = 0; i < 10; i++) {
        fprintf(out, "%4s %5d %4d\n", a[i].name, a[i].score, a[i].rank);
    }

    fclose(in);
    fclose(out);
    return 0;
}