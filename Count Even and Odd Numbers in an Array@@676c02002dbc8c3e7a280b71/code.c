#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int count(int [], int);
    printf("%d %d", count(a, n));
}
int count(int a[], int n){
    int odd = 0, even = 0;
    for (int i=0; i<n; i++){
        if (a[i]%2==0) {
            even += 1;
        }
        else {
            odd += 1;
        }
    }
    return even, odd;
}