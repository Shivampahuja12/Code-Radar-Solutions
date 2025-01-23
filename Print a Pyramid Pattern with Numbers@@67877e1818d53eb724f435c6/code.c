#include <stdio.h>
int main(){
    int n, k;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        k=1;
        for (int j=0; j<n; j++){
            if (j>=n-i-1){
                printf("%d ", k);
                k++;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}