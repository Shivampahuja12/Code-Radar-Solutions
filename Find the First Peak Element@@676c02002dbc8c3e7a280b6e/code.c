#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n], idx = -1;;

    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for (int i=1; i<n-1; i++){
        if (((i == 0 || a[i-1] < a[i]) && (i == n-1 || a[i] > a[i+1]))){
            idx = a[i];
            break;
        } 
    }
    printf("%d", idx);
    return 0;
}