#include <stdio.h>
int main() {
    int a, b, q, r;
    a = 9; b = 2;
    q = a / b;
    r = a % b;
    printf("Quotient=%d Remainder=%d\n", q, r);
    a = 10; b = 3;
    q = a / b;
    r = a % b;
    printf("Quotient=%d Remainder=%d\n", q, r);
    a = 20; b = 4;
    q = a / b;
    r = a % b;
    printf("Quotient=%d Remainder=%d\n", q, r);
    return 0;
}