#include <stdio.h>
int main(){
    int a, b;
    int res;
    char c;
    scanf("%d %d %c", &a, &b, &c);
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