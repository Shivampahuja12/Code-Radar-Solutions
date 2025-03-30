#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    if (a[0] < a[1]){
        for (int i=0; i<n; i++){
            for (int j=i; j<n; j++){
                if (a[i] <= a[j]){
                    a[i] = a[j];
                }
            }
        }
    }
    else {
        for (int i=0; i<n; i++){
            a[i] = a[i+1];
        }
    }
    a[n-1] = -1;
    for (int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}