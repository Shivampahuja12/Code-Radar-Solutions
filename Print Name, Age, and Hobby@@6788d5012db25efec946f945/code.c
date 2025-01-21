#include <stdio.h>
#include<string.h>
int main(){
    int age;
    char name[20];
    char hobby[20];
    scanf("%s", &name);
    scanf("%d", &age);
    scanf("%s", &hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
}