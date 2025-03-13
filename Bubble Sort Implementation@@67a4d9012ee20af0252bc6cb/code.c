#include<stdio.h>
void bubbleSort(int a[], int n) {
    int i, j, temp;
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j]; 
                a[j] = temp;
            }
        }
    }
}
void printArray(int a[], int n) {
    for (int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
}
