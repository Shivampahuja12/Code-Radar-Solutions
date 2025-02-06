#include <stdio.h>
int main(){
    long int n, i = 0, count = 0;
    scanf("%ld", &n);
    while (1){
        if ((n>>i)&1==1){
            break;
        }
        else {
            count += 1;
        }
        i++;
    }
    printf("%ld", 31-count);
}