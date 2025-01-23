#include <stdio.h>
int main(){
    char c;
    float a, b;
    float res;
    scanf("%f%f", &a, &b);
    scanf("%c", &c)
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
    printf("%f", res);
    return 0;
}