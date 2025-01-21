#include <stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int k = a | b;
    printf("%d", k);
    return 0; 
}