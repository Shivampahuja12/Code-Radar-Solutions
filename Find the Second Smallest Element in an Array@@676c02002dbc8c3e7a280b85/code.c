/* #include<stdio.h>
int main(){
    int n, min, smin;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    min = a[0];
    for (int i=0; i<n; i++){
        if (min > a[i]){
            min = a[i];
        }
    }
    smin = a[0];
    for (int i=0; i<n; i++){
        if (a[i] != min && smin > a[i]){
            smin = a[i];
        }
    }
    printf("%d", smin);
} */
#include <stdio.h>
#include <limits.h>
int main(){
    int n, min, smin;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    min = INT_MAX;
    for (int i=0; i<n; i++){
        if (min > a[i]){
            min = a[i];
        }
    }
    smin = INT_MAX;
    for (int i=0; i<n; i++){
        if (n==1) smin = -1;
        if (a[0] == a[1]) smin = -1;
        if (min != a[i] && smin > a[i]){
            smin = a[i];
        }
    }
    printf("%d", smin);
}