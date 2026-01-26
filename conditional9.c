#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=18){
        printf("%d Eligible to vote");
    }else
     printf("%d Not eligible to vote ");
    return 0;
}