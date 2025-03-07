#include<stdio.h>
int printPrimesInRange(int x, int y){
    int i, j, flag = 1;
    for (i=x; i<y; i++){
        for (j=2; j<=x; j++){
            if (i%j==0){
                flag = 0;
                break;
            }
        }
        if (flag == 1) printf("%d ", i);
    }
    return 0;
}