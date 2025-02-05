#include <stdio.h>
int main(){
    int n, count = 0;
    scanf("%d", &n);
    while (1){
        if ((n>>1)&1==1){
            break;
        }
        else {
            count += 1;
        }
    }
    return 0;
}