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
        default:
            printf("division by zero error");
    }
    printf("%.0f", res);
    return 0;
}