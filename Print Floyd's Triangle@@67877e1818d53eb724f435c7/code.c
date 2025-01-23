#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int k=1;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (j<=i) {
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