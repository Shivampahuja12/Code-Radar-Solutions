#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int flag = 1;
    if (a>0){
        for (int i=2; i<(n/2)+1; i++){
            if (a%i==0){
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1) printf("Prime");
    else printf("Not Prime");
}