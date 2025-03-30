#include<stdio.h>
int reptElement(int a[], int n) {
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i] == a[j] && i!=j) {
                return a[i];
            }
        }
    }
    return -1;
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d", reptElement(a, n));
}