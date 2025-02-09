#include <stdio.h>
int main(){
    int a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    if (c == '+'){
        int sum = a+b;
        printf("%d", sum);
    } 
    else if (c == '-'){
        int sub = a-b;
        printf("%d", sub);
    }
    else if (c == '*'){
        int mul = a*b;
        printf("%d", mul);
    }
    else if (c == '/') {
            float d = a / b;
            if (b>0){
                printf("%.0f", d);
            }
            else {
                printf("error");
            }
    }
}