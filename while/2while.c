#include <stdio.h>
int main() {
    int n,balance,transaction,lowBalanceDays=0,i=0;
    scanf("%d %d",&n,&balance);
    while (i<n) {
        scanf("%d", &transaction);
        balance += transaction;
        if (balance< 2000) {
            lowBalanceDays++;
        }
        i++;
    }
    printf("Final Balance:%d\n",balance);
    printf("Low Balance Days:%d\n",lowBalanceDays);
    return 0;
}