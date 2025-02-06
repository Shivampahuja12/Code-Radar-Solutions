#include <stdio.h>
int main(){
    long int n, i, count = 0;
    scanf("%ld", &n);
    while (1){
        if ((n>>31)&1==1){
            break;
        }
        else {
            count += 1;
        }
        i++;
    }
    printf("%ld", count);
}