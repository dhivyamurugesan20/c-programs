#include <stdio.h>
int main()
{
    char i, j;

    for (i = 'E'; i >= 'A'; i--)
    {
        for (j = i; j <= 'E'; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }

    return 0;
}