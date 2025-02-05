#include <stdio.h>

int main(){
    long int n;
    scanf("%ld", &n);
    long int ans = 0, pow = 1, rem =0;
    while (n > 0){
        rem = n%2;
        n /= 2;
        ans += rem*pow;
        pow *= 10;
    }   
    printf("%ld", ans);
    return 0;
}