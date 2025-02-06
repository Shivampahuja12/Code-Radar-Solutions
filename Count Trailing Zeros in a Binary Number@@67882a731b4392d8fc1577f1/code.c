#include <stdio.h>
int main(){
    int n, k = 0, count = 0;
    scanf("%d", &n);
    while (1){
        if ((n>>k)&1==1){
            break;
        }
        else {
            count += 1;
        }
        k++;
    }
    printf("%d", count);
}