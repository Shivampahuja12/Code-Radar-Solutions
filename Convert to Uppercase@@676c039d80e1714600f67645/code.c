#include<stdio.h>
#include<ctype.h>
int main(){
    char s[20];
    scanf("%[^\n]s", &s);
    for (int i=0; s[i]!='\0'; i++){
        if (islower(s[i])){
            s[i] = toupper(s[i]);
        }
    }
    printf("%s", s);
    return 0;
}