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
        if (s[i]==' '){
            continue;
        }
        else {
            num = i;
            break;
        }
    }
    int cnt = 0;
    for (int i=num; i<count; i++){
        if (s[i] == ' '){
            cnt++;
        }
    }
    printf("%d", cnt+1);
    return 0;
}