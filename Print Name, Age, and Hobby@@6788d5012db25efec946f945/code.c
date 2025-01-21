#include <stdio.h>
int main(){
    int age;
    char name[20];
    char hobby[20];
    scanf("%s", &name);
    scanf("%s", &hobby);
    scanf("%d", &age);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
}