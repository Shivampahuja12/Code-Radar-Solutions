#include<stdio.h>
int main(){
    char s[20];
    scanf("%[^\n]s", s);
    for (int i=0; s[i]!='\0'; i++){
        if (' ' == s[i]){
            s[i]=s[i+1];
        }
    }
    printf("%s", s);
}