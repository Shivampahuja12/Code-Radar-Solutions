#include<stdio.h>
int majorityElement(int a[], int n) {
    int count, flag;
    for (int i=0; i<n; i++) {
        count = 1;
        flag = 1;
        for (int j=i+1; j<n; j++) {
            if (a[i] == a[j]) {
                flag = 0;
                count++;
            }
        }
        if (flag == 1) return -1;
        if (count) return a[i];
    }
    return -1;
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("%d", majorityElement(a, n));
}