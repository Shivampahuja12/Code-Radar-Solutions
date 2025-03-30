// count the number of prime numbers in an array.
#include<stdio.h>
int countPrime(int a[], int n){
    int count = 0, flag;
    for(int i=0; i<n; i++){
        flag = 0;
        for(int j=2; j<=(a[i]/2); j++){
                if (a[i]%j==0){
                    flag = 1;
                    continue;
                }
        }
        if (flag == 0 && a[i]!=1 && a[i]!=0) count++;
    }
    printf("%d", count);
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    countPrime(a, n);
}