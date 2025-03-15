#include<stdio.h>
int main(){
    char s[20];
    scanf("%[^\n]s", s);
    int count = 0;
    for (int i=0; s[i]!='\0'; i++){
        if (' ' == s[i]){
            s[count] = s[i];
            count++;
        }
    }
    s[count] = '\0';
    printf("%s", s);
}