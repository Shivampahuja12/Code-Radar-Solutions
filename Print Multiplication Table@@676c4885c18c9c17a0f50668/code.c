#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    for (int i=0; i<10; i++){
        printf("%d x %d = %d", num, i+1, num*(i+1));
    }
    return 0;
}