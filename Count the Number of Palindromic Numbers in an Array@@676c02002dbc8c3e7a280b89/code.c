#include<stdio.h>
int main(){
    int t, pal, n, i, count = 0;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        int same = n;
        pal = 0;
        for (i=n; i>0; i=i/10){
            int rem = i % 10;
            pal = pal * 10 + rem;

        }
        if (pal == same){
            count++;
        }
        printf("%d", count);

    }
}