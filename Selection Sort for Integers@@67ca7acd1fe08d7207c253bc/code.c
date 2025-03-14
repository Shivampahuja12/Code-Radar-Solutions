#include<stdio.h>
#include<limits.h>
int swapp(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int selectionSort(int a[], int n){
    int min, mindx;
    for (int i=0; i<n-1; i++){
        min = INT_MAX;
        mindx = -1;
        for (int j=i; j<n; j++){
            if (min > a[j]){
                min = a[j];
                mindx = j;
            }
        }
        swapp(&a[i], &a[mindx]);
    }
}