#include <stdio.h>

int main() {
    int loanType, creditScore;

    scanf("%d", &loanType);
    scanf("%d", &creditScore);

    switch(loanType) {
        case 1: 
            if(creditScore >= 700) {
                printf("Approved\n");
            } else if(creditScore >= 650 && creditScore <= 699) {
                printf("Manual Review\n");
            } else {
                printf("Rejected\n");
            }
            break;

        case 2: 
            if(creditScore >= 700) {
                printf("Approved\n");
            } else {
                printf("Rejected\n");
            }
            break;

        default:
            printf("Invalid loan type\n");
    }

    return 0;
}