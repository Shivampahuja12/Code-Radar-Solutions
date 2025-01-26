#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int max(int [], int);
    max(a, n);
}

int max(int a[], int n){
    int max = a[0];
    int smax = a[0];
    for (int i=0; i<n; i++){
        if (max < a[i]){
            max = a[i];
        }
    }
    for (int i=0; i<n; i++){
        if (smax < a[i] && a[i]!=max){
            smax = a[i];
        }
    }
    printf("%d", smax);
    return 0;
}