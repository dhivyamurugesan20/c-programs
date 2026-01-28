#include<stdio.h>
int main() {
    int roomType;
    char season;
    int tariff = 0;
    scanf("%d", &roomType);
    scanf(" %c", &season); 
    switch(roomType) {
        case 1: 
            if(season == 'A') {
                tariff = 2500; 
            } else if(season == 'B') {
                tariff = 2000; 
            } else {
                printf("Invalid season\n");
                return 0;
            }
            break;
        case 2: 
            if(season == 'C') {
                tariff = 4000; 
            } else if(season == 'D') {
                tariff = 3000;
            } else {
                printf("Invalid season\n");
                return 0;
            }
            break;

        default:
            printf("Invalid room type\n");
            return 0;
    }
    printf("₹%d\n", tariff);
    return 0;
}