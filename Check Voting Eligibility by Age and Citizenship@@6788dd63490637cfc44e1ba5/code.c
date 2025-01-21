#include <stdio.h>
int main(){
    int age, ct;
    scanf("%d%d", &age, &ct);
    if (age>=18 && ct==1) printf("Eligible");
    else printf("Not Eligible");
    return 0;
}