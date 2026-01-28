#include <stdio.h>
int main() {
    int planType, paymentMode;
    int amount, cashback = 0, finalAmount;
    scanf("%d", &planType);
    scanf("%d", &paymentMode);
    switch(planType) {
        case 1:
            amount = 199;
            switch(paymentMode) {
                case 11:
                case 12:
                    cashback = 20;
                    break;
                case 13:
                    cashback = 0;
                    break;
                default:
                    printf("Invalid payment mode");
                    return 0;
            }
            break;
        case 2:
            amount = 399;
            switch(paymentMode) {
                case 11:
                case 12:
                    cashback = 20;
                    break;
                case 13:
                    cashback = 0;
                    break;
                default:
                    printf("Invalid payment mode");
                    return 0;
            }
            break;
        default:
            printf("Invalid plan type");
            return 0;
    }
    finalAmount = amount - cashback;
    printf("Pay ₹%d", finalAmount);
    return 0;
}