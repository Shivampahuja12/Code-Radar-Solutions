#include <stdio.h>
int main(){
    int a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    switch(c){
        case '+': 
            int ad = a+b;
            printf("%.0f", ad);
            break;
        case '-': 
            int s = a-b;
            printf("%.0f", s);
            break;
        case '*': 
            int m = a*b;
            printf("%.0f", m);
            break;
        case '/': 
            int d = a / b;
            printf("%.0f", d);
            break;
    }
}