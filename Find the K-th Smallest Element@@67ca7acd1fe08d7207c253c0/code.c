#include<stdio.h>
int sortedArray(int a[], int n, int k){
    int count = 0;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            return a[k-1];
        }
    }
    return -1;
}
int kthSmallest(int a[], int n, int k){
    int result = sortedArray(a, n, k);
}