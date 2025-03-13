#include<stdio.h>
void uniques(int a[], int n, int target) {
    int i, j, flag;
    for (i=0; i<n; i++){
        flag = 1;
        for (j=i+1; j<n; j++){
            if (a[i]+a[j] == target && i!=j){
                printf("%d %d\n", a[i], a[j]);
                flag = 0;
            }
            if(flag == 0) return;
        }
    }
}
int main(){
    int n, x, i, j, flag;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    uniques(a, n, x);
    // for (i=0; i<n; i++){
    //     flag = 1;
    //     for (j=i+1; j<n; j++){
    //         if (a[i]+a[j] == x && i!=j){
    //             printf("%d %d\n", a[i], a[j]);
    //             flag = 0;
    //         }
    //         if(flag == 0) break;
    //     }
        
    // }
    return 0;
}