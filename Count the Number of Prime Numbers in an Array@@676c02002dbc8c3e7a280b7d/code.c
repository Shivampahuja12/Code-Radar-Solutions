#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int checkPrime(int [], int);
    printf("%d", checkPrime(a, n));
    return 0;
}
int checkPrime(int a[], int n){
    int count = 0;
    for (int i=0; i<n; i++){
        if (a[i]%i==0){
            continue;
        }
        else {
            count += 1;
        }
    }
    return count;
}