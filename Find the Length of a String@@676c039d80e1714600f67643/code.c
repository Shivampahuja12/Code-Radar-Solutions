#include <stdio.h>
int main(){
    int count = 0;
    char s[100];
    scanf("%[^\n]s", &s);
    for (int i=0; s[i]!='\0'; i++){
        count += 1;
    }
    printf("%d", count);
}