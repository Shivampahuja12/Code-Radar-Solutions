#include <stdio.h>
int main(){
    char c;
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=="I" || c=="O" || c=="U"){
        printf("Vowel");
    }
    if (((c>='a' && c<='z') && (c>='A' && c<='Z')) && (c!='a' || c!='e' || c!='i'|| c!='o' || c!='u' || c!='A' || c!='E' || c!='I' || c!='O' || c!='U')){
        printf("Consonant");
    }
    if (c>='1' && c<='9'){
        printf("Digit");
    }
     {
        printf("Special Character");
    }
    return 0;
}