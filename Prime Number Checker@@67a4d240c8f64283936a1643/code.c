#include <stdio.h>
#include<math.h>
#include<stdbool.h>
int isPrime(int n){
    int flag = true;
    if (n==0 || n==1) return 0;
    for (int i=2; i<n; i++){
        if (n%i==0) {
            flag = false;
            break;
        }
    }
    if (flag == true) return 1;
    else return 0;
}