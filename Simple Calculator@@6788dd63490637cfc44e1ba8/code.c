#include <stdio.h>
int main(){
    int a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    if (c=='+'){
        float sum = a+b;
        printf("%.0f", sum);
    } 
    else if (c == '-'){
        float sub = a-b;
        printf("%.0f", sub);
    }
    else if (c == '*'){
        float mul = a*b;
        printf("%.0f", mul);
    }
    else {
            float d = a / b;
            if (d>0){
                printf("%.0f", d);
            }
            else {
                printf("error");
            }
    }
}