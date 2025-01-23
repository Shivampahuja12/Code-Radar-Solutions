#include <stdio.h>
int main(){
    char c;
    float a, b;
    float res;
    scanf("%d%d%c", &a, &b, &c);
    switch(c){
        case '+': {
        res = (a+b);
        break;}
        case '-':{ 
        res = (a-b);
        break;}
        case '*': {
        res = (a*b);
        break;}
        case '/': {
        res = (a/b);
        break;}
    }
    printf("%d", res);
    return 0;
}