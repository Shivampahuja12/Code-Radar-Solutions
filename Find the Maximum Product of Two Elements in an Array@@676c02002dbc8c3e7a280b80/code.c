#include<stdio.h>
int main() {
    int n, max;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            max = a[i]*a[j];
        }
    }
    printf("%d", max);
}