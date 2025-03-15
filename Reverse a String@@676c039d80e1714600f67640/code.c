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
    printf("%d", size);
    return 0;
}