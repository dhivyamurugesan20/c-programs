#include<stdio.h>
int main() {
    int n,totaldata,usage,day=0,useddays=0;
    scanf("%d %d",&n,&totaldata);
    while (day<n && totaldata>0) {
        scanf("%d",&usage);
        totaldata=totaldata-usage;
        useddays++;
        day++;
    }
    if (totaldata<0) {
        totaldata=0;
    }
    printf("Days Used: %d\n",useddays);
    printf("Remaining Data: %dGB\n",totaldata);

    return 0;
}