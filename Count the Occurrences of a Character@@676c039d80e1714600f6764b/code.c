#include<stdio.h>
int main(){
    char s[30], ch;
    int count = 0;
    scanf("%[^\n]s", &s);
    scanf(" %c", &ch);
    for (int i=0; s[i]!='\0'; i++){
        if (ch == s[i]) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}