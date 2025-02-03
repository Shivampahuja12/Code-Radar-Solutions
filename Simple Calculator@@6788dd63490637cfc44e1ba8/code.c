#include <stdio.h>
int main(){
    int a, b;
    int res;
    char c;
    scanf("%f %f %c", &a, &b, &c);
    switch(c){
        case '+': 
            int ad = a+b;
            printf("%d", ad);
            break;
        case '-': 
            int s = a-b;
            printf("%d", s);
            break;
        case '*': 
            int m = a*b;
            printf("%d", m);
            break;
        case '/': 
            int d = a/b;
            printf("%d", d);
            break;
    }
    return 0;
}