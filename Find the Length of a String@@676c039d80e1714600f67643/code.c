#include<stdio.h>
int main(){
    int count=0;
    char s[50];
    scanf("%[^\n]s", s);
    for (int i=0; s[i]!='\0'; i++){
        count++;
    }
    printf("%d", count);
}