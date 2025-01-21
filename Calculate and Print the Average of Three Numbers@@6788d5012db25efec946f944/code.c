#include <stdio.h>
int main(){
    int a, b, c;
    float f;    
    scanf("%d%d%d", &a, &b, &c);
    f = (a+b+c)/3;
    if (a==0 && b==0 && c==0) printf("0.00");
    else printf("Average: %.2f", f);
    return 0;
}