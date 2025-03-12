#include<stdio.h>
int printPrimesInRange(int a, int b){
    int i, j, flag , bool = 0;
    if (a<=1){
        for (i=2; i<=b; i++){
            if (i==0 || i==1) continue;
            flag = 1;
            for (j=2; j<=i/2; j++){
                if (i%j==0){
                    bool = 1;
                    flag = 0;
                    break;
                }
            }
            if (flag) printf("%d ", i);
        }
        if (bool) printf("No prime numbers");
    }
    else {
        for (i=a; i<=b; i++){
            if (i==0 || i==1) continue;
            flag = 1;
            for (j=2; j<=i/2; j++){
                if (i%j==0){
                    bool = 1;
                    flag = 0;
                    break;
                }
            }
            if (flag) printf("%d ", i);
        }
        if (bool) printf("No prime numbers");
    }
}