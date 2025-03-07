#include<stdio.h>
int printPrimesInRange(int x, int y){
    int i, j;
    for (i=x; i<y; i++){
        for (j=2; j<=i; j++){
            if (i%j){
                break;
            }
            printf("%d ", j);
        }
    }
}