#include <stdio.h>
int main(){
    int n, max, smax;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (int i=0; i<n; i++){
        if (max < a[i]){
            max = a[i];
        }
    }
    smax = a[0];
    for (int i=0; i<n; i++){
        if (max != a[i] && smax < a[i]){
            smax = a[i];
            break;
        }
        else {
            smax = -1;
        }
    }
    printf("%d", smax);
}
