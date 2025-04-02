#include<stdio.h>
void findPair(int a[], int n){
    int i, j, min;
    for (i=0; i<n; i++){
        min = a[0];
        for (j=i+1; j<n; j++){
            if (a[i] - a[j] > min){
                min = a[i] - a[j];
            }
        }
    }
    printf("%d %d", a[i], a[j]);
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    findPair(a, n);
}