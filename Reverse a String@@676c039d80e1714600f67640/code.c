#include <stdio.h>
#include <string.h>

int main() {
    char s[20];
    scanf("%[^\n]s", s);
    // Reversing string using strrev()
    printf("%s", strrev(s));
  
    return 0;
}
