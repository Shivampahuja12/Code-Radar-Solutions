#include <stdio.h>
#include<math.h>
#include<stdbool.h>
int isPrime(int n){
    int flag = true;
    for (int i=2; i*i<n; i++){
        if (n%i==0) {
            flag = false;
            break;
        }
    }
}