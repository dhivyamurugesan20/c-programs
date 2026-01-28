#include <stdio.h>
int main() {
    int num,sum=0,digit;
    scanf("%d",&num);
    for (int n=num;n>0;n=n/10) {
        digit=n%10;
        sum+=digit;
    }
    printf("%d",sum);
    return 0;
}