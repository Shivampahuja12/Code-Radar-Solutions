#include <stdio.h>
int main(){
    int n, rem, ans = 0, pow = 1;
    scanf("%d", &n);
    while (n > 0){
        rem = n%2;
        ans += rem*pow;
        pow *= 10;
        n /= 10;
    }
    printf("%d", ans);
    return 0;
}