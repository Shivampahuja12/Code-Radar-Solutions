#include<stdio.h>
int findPair(int a[], int n){
    for (int i=0; i<n; i++){
        int min = a[0];
        for (int j=i+1; j<n; j++){
            if (a[i] - a[j] > min){
                min = a[i] - a[j];
            }
        }
    }
    return min;
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    findPair(a, n);
}