#include <stdio.h>
int main() {
 int a;
 scanf("%d",&a);

 if(a%11==0){
     printf("%d divisible  by 11",a);
 }else{
     printf("%d not divisible by 11",a);
 }
    return 0;
}