#include <stdio.h>
int main(){
    int n, k, count = 0;
    scanf("%d%d", &n, &k);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n; i++){
        if (a[i] == k) count += 1;
    }
    printf("%d", count);
    return 0;
}