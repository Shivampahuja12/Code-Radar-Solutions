#include<stdio.h>
#include<stdio.h>
char printPrimesInRange(int a, int b){
    int i, j, flag;
    if (a<=1){
        for (i=2; i<=b; i++){
            if (i==0 || i==1) continue;
            flag = 1;
            for (j=2; j<=i/2; j++){
                if (i%j==0){
                    flag = 0;
                    break;
                }
            }
            if (flag) printf("%d ", i);
        }
        printf("No prime numbers");
    }
    else {
        for (i=a; i<=b; i++){
            if (i==0 || i==1) continue;
            flag = 1;
            for (j=2; j<=i/2; j++){
                if (i%j==0){
                    flag = 0;
                    break;
                }
            }
            if (flag) printf("%d ", i);
        }
        printf("No prime numbers");
    }
}