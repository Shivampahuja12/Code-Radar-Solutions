#include<stdio.h>
int printPrimesInRange(int x, int y){
    int i, j, flag = 1;
    for (i=x; i<y; i++){
        for (j=2; j<=x; j++){
            if (i%j==0){
                break;
            }
            printf("%d ", i);
            break;
        }
    }
    return 0;
}