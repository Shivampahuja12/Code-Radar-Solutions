#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n], idx = -1;;

    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for (int i=1; i<n-1; i++){
        if (((i == 0 || arr[i-1] < arr[i]) && (i == n-1 || arr[i] > arr[i+1]))){
            idx = a[i];
            break;
        } 
    }
    printf("%d", idx);
    return 0;
}