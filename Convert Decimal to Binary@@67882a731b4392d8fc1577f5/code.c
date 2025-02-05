#include <stdio.h>

int main(){
    long int n;
    scanf("%d", &n);
    int rem, ans = 0, pow = 1;
    while (n > 0){
        rem = n%2;
        n /= 2;
        ans += rem*pow;
        pow *= 10;
    }   
    printf("%d", ans);
    return 0;
}