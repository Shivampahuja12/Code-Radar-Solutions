#include <stdio.h>
int main(){
    char c;
    int a, b;
    scanf("%d%d%c", &a, &b, &c);
    if (c=='+') printf("%d", a+b);
    else if (c=='-') printf("%d", a-b);
    else if (c=='*') printf("%d", a*b);
    else if (c=='/') printf("%d", a/b);
    return 0;
}