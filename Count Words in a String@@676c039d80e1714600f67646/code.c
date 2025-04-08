// Count number of words in a string
#include<stdio.h>
int main(){
    char s[100];
    scanf(" %[^\n]", s);
    int i=0, count=0;
    while (s[i]!='\0'){
        i++, count++;
    }
    int num = 0;
    for (int i=0; i<count; i++){
        if (s[i]==' ') continue;
        else {
            num = i;
            break;
        }
    }
    int end = 0;
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
    if ((num == 0 || end == 0) && count == 0) printf("0");
    else if (s[num] != ' ') printf("%d", cnt+1);
    return 0;
}