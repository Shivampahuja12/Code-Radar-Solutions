#include<stdio.h>
int findFact(int i){
    int fact = 1;
    for (int k=1; k<=i; k++){
        fact*=k;
    }
    return fact;
}
void factorialRange(int s, int e){
    if (s > e || (s < 0 || e < 0)){
            printf("Invalid range");
            return;
        }
    for (int i=s; i<=e; i++){
        int x = findFact(i);
        printf("%d\n", x);
    }
}