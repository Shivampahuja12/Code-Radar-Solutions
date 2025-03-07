#include<stdio.h>

int fibonacciSeries(int n) {
    int f0=0, f1=1, f;
    printf("%d %d ", f0, f1);
    for (int i=2; i<n; i++){
        f=f0+f1;
        f0=f1;
        f1=f;
        printf("%d ", f);
    }
}