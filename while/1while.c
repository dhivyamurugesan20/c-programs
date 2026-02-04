#include <stdio.h>
int main() {
    int n,noise,violation=0,cs=0,ls=0;
    scanf("%d",&n);
    while (n>0){
        scanf("%d",&noise);
    if (noise>70) {
        violation++;
        cs++;
        if (cs>ls) {
            ls=cs;
        }
    }else {
        cs=0;
    }
    n--;
}
printf("noise violations: %d\n",violation);
printf("Longest violation streak: %d",ls);
    return 0;
}