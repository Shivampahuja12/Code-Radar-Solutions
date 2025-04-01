#include<stdio.h>
void reverse(int a[], int s, int e){
    while (s<e){
        int temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int k;
    k=k%n;
    reverse(a, 0, n-1);
    reverse(a, 0, k-1);
    reverse(a, k, n-1);
    for (int i=0; i<n; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}