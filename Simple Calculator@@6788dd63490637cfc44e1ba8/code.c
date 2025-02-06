#include <stdio.h>
int main(){
    float a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    switch(c){
        case '+': 
            float ad = a+b;
            printf("%.0f", ad);
            break;
        case '-': 
            float s = a-b;
            printf("%.0f", s);
            break;
        case '*': 
            float m = a*b;
            printf("%.0f", m);
            break;
        case '/': 
            int d = a / b;
            if (d>0){
                printf("%.0f", d);
            }
            else {
                printf("error");
            }
            break;
    }
}