#include <stdio.h>
#include <math.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    float sq = sqrt(a);
    if (sq==b) printf("Yes");
    else printf("No");
    return 0;
}