#include <stdio.h>
int main(){
    int vowels = 0;
    char s[100];
    scanf("%[^\n]s", &s);
    for (int i=0; s[i]!='\0'; i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            vowels++;
        }
    }
    printf("%d", vowels);
}