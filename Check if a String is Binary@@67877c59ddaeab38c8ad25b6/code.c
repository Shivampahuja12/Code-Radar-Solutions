#include<stdio.h>
#include<string.h>
int main(){
    char s[20];
    int flag = 1;
    scanf("%[^\n]s", s);
    int n = strlen(s);
    for (int i=0; s[i]!='\0'; i++){
        if (s[i] == '1' || s[i] == '0' || s[0] == '\0'){
            continue;
        }
        else{
            flag = 0;
            break;
        }
    }
    if (flag == 0) printf("No");
    else printf("Yes");
    return 0;
}