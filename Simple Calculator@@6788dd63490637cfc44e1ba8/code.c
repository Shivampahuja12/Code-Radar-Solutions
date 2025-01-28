#include <stdio.h>
int main(){
    float a, b;
    float res;
    char c;
    scanf("%f %f %c", &a, &b, &c);
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
    printf("%d", res);
    return 0;
}