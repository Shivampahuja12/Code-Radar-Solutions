#include <stdio.h>
#include <limits.h>
int main(){
    int n, max, smax;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    max = INT_MIN;
    for (int i=0; i<n; i++){
        if (max < a[i]){
            max = a[i];
        }
    }
    smax = INT_MIN;
    for (int i=0; i<n; i++){
        if (n==1) smax = -1;
        if (max != a[i] && smax < a[i]){
            smax = a[i];
        }
        if (a[i] == a[i++]) smax = -1;
    }
    printf("%d", smax);
}
