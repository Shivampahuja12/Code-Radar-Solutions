#include<stdio.h>
int isPrime(int a){
    for(int i = 2  ; i <  a ;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
void printPrimeInRange(int a , int b){
    int check = 0;
    for(int i = 2 ; i < b ;i++){
        if(isPrime(i)){
            printf("%d ",i);
            check = 1;
        }
    }
    if(check){
        printf("No prime numbers");
    }
}