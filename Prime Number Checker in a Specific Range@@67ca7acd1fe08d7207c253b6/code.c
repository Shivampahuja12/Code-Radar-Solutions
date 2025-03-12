#include<stdio.h>
int isPrime(int a){
    for(int i = 2  ; i <  a ;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
void printPrimesInRange(int a , int b){
    if(a<2) a = 2;
    int check = 0;
    for(int i = a ; i <= b ;i++){
        if(isPrime(i)){
            printf("%d ",i);
            check = 1;
        }
    }
    if(check==0){
        printf("No prime numbers");
    }
}