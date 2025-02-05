#include <stdio.h>
int main(){
    int n, i, count = 0;
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
    if (num>4000000000) printf("0");
    printf("%d", 31-count);
}