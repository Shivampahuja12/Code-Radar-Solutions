#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        for (int j=0; j<n*2-1; j++){
            if (j>=n-1-i && j<=n-1+i){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i=1, i<n; i++){
        for (int j=0; j<n*2-1; j++){
            if (j>=i && j<=(n-1)*2-i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}