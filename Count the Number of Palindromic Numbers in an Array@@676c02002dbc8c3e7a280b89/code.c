#include<stdio.h>
int main(){
    int t, pal, n;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        int same = j;
        pal = 0;
        for (i=j; i>0; i=i/10){
            rem = i % 10;
            pal = pal * 10 + rem;
        }
        if (pal == same){
            printf("%d ", pal);
        }
    }
}