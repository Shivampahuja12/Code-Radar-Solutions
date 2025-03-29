#include<stdio.h>
void swapper(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(char a[], int n){
    for (int i=1; i<6; i++){
        char j = i;
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
        printf("%c ", a[i]);
    }
}