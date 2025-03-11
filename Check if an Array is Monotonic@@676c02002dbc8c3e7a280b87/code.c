#include<stdio.h>
#include<stdbool.h>
int main(){
    int n, flag = 1;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n-1; i++){
        if (a[i] < a[i+1]) {
            printf("YES");
        }
    }
    for (int i=0; i<n-1; i++){
        if (a[i] > a[i+1]) {
            printf("YES");
        }
    }
}