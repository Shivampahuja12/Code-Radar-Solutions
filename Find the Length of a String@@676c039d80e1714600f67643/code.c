#include <stdio.h>
int main(){
    int count = 0;
    char s[1];
    scanf("%s", &s);
    for (int i=0; s[i]!='\0'; i++){
        count += 1;
    }
    printf("%d", count);
}