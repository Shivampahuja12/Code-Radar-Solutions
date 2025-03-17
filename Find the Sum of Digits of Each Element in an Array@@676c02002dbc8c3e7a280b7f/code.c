#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n; i++){
        int sum = 0;
        for (int j=a[i]; j>0; j=j/10){
            int rem = j%10;
            sum = sum + rem;
        }
        printf("%d ", sum);
    }
}