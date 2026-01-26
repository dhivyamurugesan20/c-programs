#include<stdio.h>
int main(){
    char ch;
    scanf("%d",&ch);
    if(ch>=65 && ch>=90)
    printf("Upper case");
    else if(ch>=97 && ch>=122)
    printf("Lower case");
    else if(ch>=48 && ch>=57)
    printf("Digit");
    else
      printf("special character");
    return 0;
}