#include <stdio.h>

int main() {
    int n,success = 0,cancel = 0,i = 0, order;
    scanf("%d", &n);
    while (i < n) {
        scanf("%d", &order);

        if (order == 1)
            success++;
        else
            cancel++;

        i++;
    }
    printf("Successful: %d\n", success);
    printf("Cancelled: %d\n", cancel);
    if (cancel > success)
        printf("Status: Risk\n");
    else
        printf("Status: Safe\n");
    return 0;
}
