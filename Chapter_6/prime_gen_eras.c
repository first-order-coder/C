#include <stdio.h>

int main(void)
{
    int n = 150;
    int p[151] = {0};
    int i, j;

    i = 2;

    while (i <= n)
    {
        if (p[i] == 0)
        {
            printf("%3d is prime \n", i);

            for (j = 2; i * j <= n; j++)
            {
                p[i * j] = 1;
            }
        }

        i++;
    }

    return 0;
}