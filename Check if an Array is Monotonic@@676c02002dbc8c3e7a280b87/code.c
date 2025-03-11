#include<stdio.h>
#include<stdbool.h>
int main(){
    int n, flag;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    flag = 0;
    if (n==1) printf("YES");
    else if (a[0] > a[1]){
        for (int i=0; i<n-1; i++){
        if (a[i] > a[i+1]) {
            flag = 1;
        }
    }
        if (flag == 1) printf("YES");
        else printf("NO");
    }
    else {
        flag = 0;
        for (int i=0; i<n-1; i++){
        if (a[i] < a[i+1]) {
            flag = 1;
        }
    }
    if (flag == 1) printf("YES");
    else printf("NO");
    }

    
    
    
}