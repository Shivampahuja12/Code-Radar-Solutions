#include <stdio.h>
#include <string.h>
int main() {
    char s[20];
    scanf("%[^\n]s", s);
    printf("%s", strrev(s));
    return 0;
}