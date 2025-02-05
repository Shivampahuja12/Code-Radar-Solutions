#include <stdio.h>
int main(){
    int n, i;
    scanf("%d%d", &n, &i);
    if ((n>>i)&1==1) printf("1");
    else printf("0");
    return 0;
}