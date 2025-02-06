#include <stdio.h>
int main(){
    int n, i = 0, count = 0;
    scanf("%d", &n);
    while (1){
        if ((n>>i)&1==1){
            break;
        }
        else {
            count += 1;
        }
        i++;
    }
    printf("%d", 31-count);
}