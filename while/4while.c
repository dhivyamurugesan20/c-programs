include<stdio.h>
int main() {
    int n,i,streak,current,maximum;
    scanf("%d",&n) ;
    while (i<n) {
        scanf("%d",&streak);
        if (streak==0) {
            i++;
        }
        if (current>maximum) {
            maximum=current;
        }
        else {
            current=0;
        }
        i++;
    }
        printf("Longest Failure Streak: %d\n",)
    return 0;
}