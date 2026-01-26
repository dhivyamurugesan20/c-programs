#include <stdio.h>
int main() {
    int n, a, b;
    scanf("%d", &n);
    scanf("%d %d", &a, &b);
    switch(n) {
        case 1:
            printf("sum = %d", a + b);
            break;
        case 2:
            printf("sub = %d", a - b);
            break;
        default:
            printf("Invalid");
    }
    return 0;
}