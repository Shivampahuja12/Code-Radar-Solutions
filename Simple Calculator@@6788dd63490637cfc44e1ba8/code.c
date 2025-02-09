#include <stdio.h>
int main(){
    int a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    if (c=='+'){
        int sum = a+b;
        printf("%.0f", sum);
    } 
    else if (c == '-'){
        int sub = a-b;
        printf("%.0f", sub);
    }
    else if (c == '*'){
        int mul = a*b;
        printf("%.0f", mul);
    }
    else {
            int d = a / b;
            if (d>0){
                printf("%.0f", d);
            }
            else {
                printf("error");
            }
    }
}