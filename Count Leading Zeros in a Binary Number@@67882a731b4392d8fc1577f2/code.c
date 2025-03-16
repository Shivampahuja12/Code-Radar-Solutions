#include <stdio.h>
#include <limits.h>
int main(){
    long int n, i = 0, count = 0;
    scanf("%ld", &n);
    while (1){
        if ((n>>i)&1==1){
            break;
        }
        else {
            count += 1;
        }
        i++;
    }
    if (n !> INT_MAX || n !< INT_MIN){
        printf("%ld", 31-count);
    }
    else printf("0");
    return 0;
}