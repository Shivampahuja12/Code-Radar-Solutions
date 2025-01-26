#include <stdio.h>

int decToBinary(int n){
    int rem, ans = 0, pow = 1;
    while (n > 0){
        rem = n%2;
        n /= 2;
        ans += rem*pow;
        pow *= 10;
    }   
    return ans;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", decToBinary(n));
    return 0;
}