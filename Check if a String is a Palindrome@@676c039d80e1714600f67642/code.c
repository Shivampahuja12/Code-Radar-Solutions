#include<stdio.h>
int main(){
    char s[50];
    int size = 0, low, high, flag = 1;
    scanf("%[^\n]s", s);
    for (int i=0; s[i]!='\0'; i++){
        size++;
    }
    low = 0, high = size-1;
    while (low<=high){
        if(s[low] == s[high]){
            low++;
            high--;
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