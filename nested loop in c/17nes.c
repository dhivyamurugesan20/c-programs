#include <stdio.h>

int main() {
    char i, j, s;

    for (i = 'A'; i <= 'D'; i++) {
        for (s = 'D'; s > i; s--) {
            printf(" ");
        }
        for (j = 'A'; j <= i; j++) {
            printf("%c", j);
        }
        for (j = i - 1; j >= 'A'; j--) {
            printf("%c", j);
        }
        printf("\n");
    }

    return 0;
}