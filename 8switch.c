#include<stdio.h>
int main() {
    int marks, attendance;
    scanf("%d", &marks);
    scanf("%d", &attendance);
    switch(marks / 10) {
        case 10:
        case 9:
        case 8:
        case 7:
            if(attendance < 75) {
                printf("Fail");
            } else {
                printf("Distinction");
            }
            break;
        case 6:
        case 5:
            if(attendance < 75) {
                printf("Fail");
            } else {
                printf("Pass");
            }
            break;
        default:
            printf("Fail");
    }
    return 0;
}