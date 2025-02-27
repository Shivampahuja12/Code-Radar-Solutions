#include <stdio.h>
int isPrime(int n){
    int count = 0;
    for (int i=2; i<n; i++){
        if (n%i==0) {
            count = 1;
            break;
        }
    }
    if (count == 0) return "1";
    else return "0";
}