#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        int k = 1;
        for (int j=0; j<n; j++){
            if (j>=n-1-i){
                printf("%d ", k);
                k++;
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}