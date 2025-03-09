#include<stdio.h>
int main(){
    char str[30], ch, ch2;
    scanf("%[^\n]s", &str);
    scanf(" %c", &ch);
    scanf(" %c", &ch2);
    for (int i=0; str[i]!='\0'; i++){
        if (str[i] == ch){
            str[i] = ch2;
        }
    }
    printf("%s", str);
    return 0;
}