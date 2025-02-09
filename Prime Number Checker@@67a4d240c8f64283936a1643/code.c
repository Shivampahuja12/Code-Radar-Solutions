#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
int isPrime(int n){
    int count = 0;
    for (int i=2; i<n; i++){
        if (n%i==0) {
            count = 1;
            break;
        }
    }
    if (count == 0) return 1;
    else return 0;
    return 1;
}