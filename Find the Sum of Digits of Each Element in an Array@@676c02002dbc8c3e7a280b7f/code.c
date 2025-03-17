#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n; i++){
        int sum = 0, j = a[i];
        do {
            int rem = j%10;
            sum = sum + rem;
        } while (j/=10);
        printf("%d ", abs(sum));
    }
    return 0;
}