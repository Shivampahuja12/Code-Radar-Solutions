#include<stdio.h>
int findOccurrence(int a[], int n, int target, char mode){
    if (mode == 'F') {
        for (int i=0; i<n; i++){
            if (target == a[i]) {
                return i;
            }
        }
    }
    else if (mode == 'L') {
        for (int i=n-1; i>=0; i--){
            if (target == a[i]){
                return i;
            }
        }
    }
    else {
        return -1;
    }
}