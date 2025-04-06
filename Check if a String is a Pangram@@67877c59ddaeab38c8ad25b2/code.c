#include<stdio.h>
void check(char s[]){
    int flag = 1;
    for (int i=0; s[i]!='\0'-1; i++){
        if ((s[i] == s[i+1]) && s[i]!=' '){
            flag = 0;
            break;
        }
    }
    if (flag == 1) printf("Yes");
    else printf("No");
}
int main(){
    char s[50];
    scanf("%[^\n]s", s);
    check(s);
    return 0;
}