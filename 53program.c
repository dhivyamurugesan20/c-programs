#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int q = a, r = a;   
    printf("%d %d\n",   q /= b,  r %= b);
    return 0;
}