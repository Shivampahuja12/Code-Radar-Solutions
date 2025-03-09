#include<stdio.h>
#include<ctype.h>
int main(){
    char s[20];
    scanf("%[^\n]s", s);
    if (isupper(s[i])){
        s[i] = tolower(s[i]);
    }
    if (islower(s[i])){
        s[i] = toupper(s[i]);
    }
    printf("%s", s);
    return 0;
}