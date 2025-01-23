#include <stdio.h>
int main(){
    float a, b;
    float res;
    char c;
    scanf("%f%f", &a, &b);
    scanf("%c", &c)
    switch(c){
        case '+': 
            res = a+b;
            break;
        case '-': 
            res = a-b;
            break;
        case '*': 
            res = a*b;
            break;
        case '/': 
            res = a/b;
            break;
    }
    printf("%f", res);
    return 0;
}