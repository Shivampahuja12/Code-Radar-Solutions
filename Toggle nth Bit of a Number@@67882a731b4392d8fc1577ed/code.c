#include <stdio.h>
int main(){
    int n, i;
    scanf("%d%d", &n, &i);
    printf("%d", n^(1<<i));
    return 0;
}