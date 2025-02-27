#include<stdio.h>
#include<stdbool.h>
int main(){
    int n, flag = true;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for (int i=1; i<n; i++){
        if ((a[i-1] >= a[i])){
            flag = false;
            break;
        }
        if ((a[i-1] <= a[i])){
            flag = false;
            break;
        }
    }
    if (flag == true){
        printf("YES");
    }
    else {
        printf("NO");
    }
}