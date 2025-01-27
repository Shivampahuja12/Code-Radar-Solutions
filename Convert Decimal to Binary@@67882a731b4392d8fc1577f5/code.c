#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", decToBinary(n));
    int rem, ans = 0, pow = 1;
    while (n > 0){
        rem = n%2;
        n /= 2;
        ans += rem*pow;
        pow *= 2;
    }   
    printf("%d", ans);
    return 0;
}