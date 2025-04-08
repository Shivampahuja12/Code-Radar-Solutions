// Concatenate two strings
#include<stdio.h>
int main(){
    char s1[100], s2[100];
    scanf(" %[^\n]", s1);
    scanf(" %[^\n]", s2);
    // int i=0, count1=0;
    // while (s1[i]!='\0'){
    //     i++, count1++;
    // }
    // int j=0, count2=0;
    // while (s2[i]!='\0'){
    //     j++, count2++;
    // }
    printf("%s", s1);
    printf("%s", s2);
    return 0;
}