#include <stdio.h>
int main() {
 char ch;
 scanf("%c",&ch);
 printf("%c",ch);
 if(ch>='A' && ch<='Z'){
     printf("uppercase letter");
 }else{
     printf("lowercase letter");
 }
    return 0;
}
