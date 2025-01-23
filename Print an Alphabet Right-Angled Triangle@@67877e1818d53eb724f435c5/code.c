#include <stdio.h>
int main(){
    int n;
    char c;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        c = 'A';
        for (int j=0; j<=i; j++){
            printf("%c ", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}