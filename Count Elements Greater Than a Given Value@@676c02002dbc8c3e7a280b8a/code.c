#include <stdio.h>

int count(int a[], int k, int n){
    int cnt = 0;
    for (int i=0; i<n; i++){
        if (a[i] > k){
            cnt += 1;
        }
    }
    return cnt;
}

int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("%d", count(a, k, n));
    return 0;
}