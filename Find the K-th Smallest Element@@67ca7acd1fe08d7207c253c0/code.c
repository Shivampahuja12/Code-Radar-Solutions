#include<stdio.h>
int sortedArray(int a[], int n){
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int kthSmallest(int a[], int n, int k){
    int result = sortedArray(a, n);
    printf("%d", a[k-1]);
}