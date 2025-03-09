#include<stdio.h>
int main(){
    char str[30], ch;
    int count = 0, flag;
    scanf("%[^\n]s", &str);
    for (int i=0; str[i]!='\0'; i++){
        flag = 0;
        for (int j=0; str[j]!='\0'; j++){
            if (str[j]==str[i]){
                flag = 1;
            }
            else {
                flag = 0;
            }
        }
    }
    if (flag == 0) {
        printf("No");
    }
    else {
        printf("Yes");
    }
}