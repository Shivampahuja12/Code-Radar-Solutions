#include<stdio.h>
int main(){
    int n, x;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for (int i=0; i<n; i++){
        for (int j=1; j<=i; j++){
            if (a[i]+a[j] == x){
                printf("%d %d", a[j], a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}