#include<stdio.h>
int main(){
    int n, flag = 1;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int start = 0, end = n-1;
    for (int i=0; i<n; i++){
        if (a[start] == a[end]) {
            start++;
            end--;
        }
        else {
            flag = 0;
            break;
        }
    }
    if (flag == 1) printf("YES");
    else printf("NO");
}