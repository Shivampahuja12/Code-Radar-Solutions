#include<stdio.h>
int main(){
    char s[20], ch;
    scanf("%[^\n]s", s);
    scanf(" %c", &ch);
    for (int i=0; s[i]!='\0'; i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            ch = s[i];
        }
    }
    printf("%s", s);
    return 0;
}