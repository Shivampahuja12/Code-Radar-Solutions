// Count number of words in a string
#include<stdio.h>
int main(){
    char s[100];
    scanf("%[^\n]s", s);
    int i=0, count=0;
    while (s[i]!='\0'){
        i++, count++;
    }
    int num;
    for (int i=0; i<count; i++){
        if (s[i]==' ') continue;
        else {
            num = i;
            break;
        }
    }
    int end;
    for (int i=count-1; i>=0; i--){
        if (s[i]==' ') continue;
        else {
            end = i;
            break;
        }
    }
    int cnt = 0;
    for (int i=num; i<end; i++){
        if (s[i] == ' '){
            cnt++;
        }
    }
    if (s[num] != ' '){
        printf("%d", cnt+1);
    }
    else {
        printf("0");
    }
    return 0;
}