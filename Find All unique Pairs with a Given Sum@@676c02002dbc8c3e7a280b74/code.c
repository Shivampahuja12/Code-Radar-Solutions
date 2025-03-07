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
        for (int j=i; j<n; j++){
            if (a[i]+a[j] == x){
                printf("%d %d\n", a[i], a[j]);
                break;
            }
        }
    }
    return 0;
}