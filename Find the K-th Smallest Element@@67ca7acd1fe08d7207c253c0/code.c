#include<stdio.h>
int sortedArray(int a[], int n, int k){
    int i ,j, flag;
    for (i=0; i<n; i++){
        flag = 1;
        for (j=i+1; j<n; j++){
            if (a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    if (k) return -1;
    else return a[k-1];
}
int kthSmallest(int a[], int n, int k){
    int result = sortedArray(a, n, k);
}