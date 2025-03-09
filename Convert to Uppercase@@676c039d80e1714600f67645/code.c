#include<stdio.h>
#include<ctype.h>
int main(){
    char s[20];
    scanf("%s", &s);
    for (int i=0; s[i]!='\0'; i++){
        if (islower(str[i])){
            toupper(str[i]);
        }
        if (islower(str[i])){
            tolower(str[i]);
        }
    }
    printf("%s", s);
    return 0;
}