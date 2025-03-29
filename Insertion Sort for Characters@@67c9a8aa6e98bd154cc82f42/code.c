#include<stdio.h>
void insertionSort(char a[], int n){
    for (int i=1; i<n-1; i++){
        char temp = a[i];
        int j = i-1;
        while (j>=0 && a[j] > temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}
void printArray(char a[], int n){
    for (int i=0; i<n; i++){
        printf("%c ", a[i]);
    }
}