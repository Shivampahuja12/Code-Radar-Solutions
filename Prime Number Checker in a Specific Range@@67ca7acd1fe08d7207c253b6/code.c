#include<stdio.h>
void printPrimesInRange(int x, int y){
    int i, j, flag;
    if (x < 2) {
        printf("No prime numbers");
    }
    else {
        for (i=x; i<=y; i++){
            flag = 0;
            for (j=2; j<i; j++){
                if (i%j==0){
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) printf("%d ", i);
        }
    }
    }
    return;
}