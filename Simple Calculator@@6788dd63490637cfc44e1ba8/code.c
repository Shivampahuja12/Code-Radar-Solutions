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
            printf("error in case of any error.");
    }
    printf("%.0f", res);
    return 0;
}