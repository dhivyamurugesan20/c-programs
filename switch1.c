#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int c;
    switch(a){
        case 1:
            if(b<100){
                c=b*3;
                printf("Bill ₹%d",c);
            }else if(b>100){
                c=(100*3)+(80*5);
                c=c-80;
                printf("Bill ₹%d",c);
            }
            break;
        case 2:
            if(b>100){
                c=(100*7)+(20*10);
                printf("Bill ₹%d",c);
            }
            break;
    }

    return 0;
}