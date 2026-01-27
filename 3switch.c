#include<stdio.h.>
int main() {
    int atm,b,c;
    scanf("%d %d %d",&atm,&b,&c);
    switch (atm) {
        case 1:
            if (atm>=b){

                printf("transaction sucessfull");
            }else{
                printf("transaction rejected");
            }
        case 2:
            if (c<=5000){
                printf("transaction sucessfull");
            }else{
                printf("limited exceded");
            }
            return 0;
    }
}