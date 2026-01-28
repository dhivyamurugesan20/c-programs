#include<math.h>
#include<stdio.h>

int main () {
    int m,n,pow=1;
    scanf("%d %d",&m,&n);
    for ( int i=1;i<=n;i++) {
       pow*=m;
    }
    printf("%d",pow);
    return 0;
}
