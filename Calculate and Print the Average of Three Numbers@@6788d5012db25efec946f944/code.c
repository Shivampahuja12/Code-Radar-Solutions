#include <stdio.h>
int main(){
    int a, b, c;
    float f;    
    scanf("%d%d%d", &a, &b, &c);
    f = (a+b+c)/3.0;
    printf("Average: %.2f", f);
    return 0;
}