#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a% 3 == 0 &&  a% 7 == 0){
        printf("%d multiple of both 3 and 7");
    }else
     printf("%d not multiple by both numbers");
    return 0;
}