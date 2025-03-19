#include<stdio.h>
int sortedArray(int a[], int n, int k){
    for (int i=0; i<n; i++){
        int count = 0;
        for (int j=i+1; j<n; j++){
            if (a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            if (k == a[i]){
                count = 1;
                continue;
            }
        }
    }
    if (count == 1) return a[k-1];
    else return -1;
}
int kthSmallest(int a[], int n, int k){
    int result = sortedArray(a, n, k);
}