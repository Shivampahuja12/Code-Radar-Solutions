#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("%d",max(a[], n));
    return 0;
}
int max(int a[], int n) {
    int max = a[0];
    for (int i=1; i<n; i++){
        if (a[i]%2==0){
            if (a[i] > max){
                max = a[i];
            }
        }
    }
    if (max > 0) return max;
    else return -1;
}