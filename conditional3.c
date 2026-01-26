#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%5==0){
        printf("%d is divisible by 5");
    }else{
        printf("%d is not divisible by 5");
    }
    return 0;
}