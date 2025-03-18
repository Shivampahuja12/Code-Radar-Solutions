#include<stdio.h>
void swapper(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void insertionSort(int a[], int n){
    for (int i=1; i<n; i++){
        int j=i;
        while (j>=1 && a[j] < a[j-1]){
            if (a[j] >= a[j-1]){
                break;
            }
            else {
                swapper(&a[j], &a[j-1]);
            }
            j--;
        }
    }
}
void printArray(int a[], int n){
    for (int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}