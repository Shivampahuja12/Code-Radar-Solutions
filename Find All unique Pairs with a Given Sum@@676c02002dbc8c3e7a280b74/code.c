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
        for (int j=i+1; j<n; j++){
            if (a[i]+a[j] == x && i!=j){
                printf("%d %d\n", a[i], a[j]);
                break;
            }
            if (a[i]+a[j] == x && i==j) {
                break;
            }
        }
    }
    return 0;
}