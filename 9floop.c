#include <stdio.h>
int main () {
    int i,n,count=0,r;
    scanf("%d",&n);
    for (i=1;n!=0;n=n/10) {
        r=n%10;
        count++;

    }
    printf("%d",count);
    return 0;
}