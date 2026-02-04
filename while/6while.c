#include <stdio.h>
int main() {
    int maxWeight, n;
    int totalWeight = 0;
    int allowed = 0;
    int i = 0, weight;
    scanf("%d", &maxWeight);
    scanf("%d", &n);
    while (i < n) {
        scanf("%d", &weight);
        if (totalWeight + weight > maxWeight) {
            break;
        }
        totalWeight += weight;
        allowed++;
        i++;
    }
    printf("Passengers Allowed: %d\n", allowed);
    if (allowed < n)
        printf("Overload: Yes\n");
    else
        printf("Overload: No\n");
    return 0;
}
