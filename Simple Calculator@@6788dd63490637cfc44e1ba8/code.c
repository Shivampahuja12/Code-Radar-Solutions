#include <stdio.h>
int main(){
    char c;
    float a, b;
    float res;
    scanf("%d%d%c", &a, &b, &c);
    switch(c){
        case '+': res = (a+b);
        case '-': res = (a-b);
        case '*': res = (a*b);
        case '/': res = (a/b);
    }
    printf("%d", res);
    return 0;
}