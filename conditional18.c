#include <stdio.h>
int main() {
    int u,b;
    scanf("%d",&u);
    if (u<= 50)
        b=u* 3;
    else if (u<= 100)
        b = 50 * 3 + (u- 50) * 4;
    else
        b = 50 * 3 + 50 * 4 + (u - 100) * 5;
    printf("Bill amount = Rs. %d\n", b);
    return 0;
}