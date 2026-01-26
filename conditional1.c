#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("%d is positive number");
    }else if(a==0){
        printf("%d present zero");
    }else{
        printf("%d is negative");
    }
    return 0;
}