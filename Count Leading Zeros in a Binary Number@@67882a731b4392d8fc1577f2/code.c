#include <stdio.h>
int main(){
    int n, i, count = 0;
    scanf("%d", &n);
    while (1){
        if ((n>>31)&1==1){
            break;
        }
        else {
            count += 1;
        }
        i++;
    }
    printf("%d", count);
}