#include<stdio.h>
void printPrimesInRange(int x, int y){
    int i, j, flag;
    for (i=x; i<=y; i++){
        flag = 0;
        for (j=2; j<=i; j++){
            if (i%j==0){
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d ", i);
        }
        else {
            printf("No prime numbers");
            break;
        }
    }
    return;
}