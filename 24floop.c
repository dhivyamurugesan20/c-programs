#include <stdio.h>
int main() {
    int n,temp,digit,rev=0;
    scanf("%d",&n);
    temp=n;
    for (;temp>0;temp/=10) {
        digit=temp%10;
        rev=rev*10+digit;
    }
    if (rev==n)
        printf("Yes");
    else
        printf("No");
    return 0;
}