#include <stdio.h>


int max(int a[], int n) {
    int max = a[0], odd = 0;
    for (int i=0; i<n; i++){
        if (a[i]%2==0){
            if (a[i] > max){
                max = a[i];
            }
        }
        else {
            odd += 1;
        }
    }
    if (odd / n == 1) return -1;
    else  return max;
}


int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("%d",max(a, n));
    return 0;
}