#include <stdio.h>
int main(){
    char c;
    int a, b;
    scanf("%d%d", &a, &b);
    scanf("%c", &c);
    if (c=='+') printf("%d", a+b);
    if (c=='-') printf("%d", a-b);
    if (c=='*') printf("%d", a*b);
    if (c=='/') printf("%d", a/b);
    return 0;
}