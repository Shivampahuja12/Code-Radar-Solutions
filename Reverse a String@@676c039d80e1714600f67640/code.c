#include <stdio.h>
#include <string.h>
int main() {
    char s[20];
    int i = 0, size = 0;
    scanf("%[^\n]s", s);
    while (s[i]!='\0'){
        size++;
        i++;
    }
    for(int i=size-1; i>=0; i--){
        printf("%c", s[i]);
    }
    return 0;
}