#include<stdio.h>
void swapp(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n;
    scanf("%d", &n);
    char s[n];
    for (int i=0; i<n; i++){
        scanf("%c", &s[i]);
    }
    int a = 97;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (s[i] > s[j]){
                swapp(&s[i], &s[j]);
            }
        }
    }
    printf("Sorted array: ")
    for (int i=0; i<n; i++){
        printf("%c ", s[i]);
    }
}