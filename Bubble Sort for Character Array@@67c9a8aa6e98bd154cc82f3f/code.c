#include<stdio.h>
void swapp(char *a, char *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printArray(char s[], int n){{
    for (int i=0; i<n; i++){
        printf("%c ", s[i]);
    }
}

}
void bubbleSort(char s[], int n){
    int a = 97;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (s[i] > s[j]){
                swapp(&s[i], &s[j]);
            }
        }
    }
    printf("Sorted array: ");
    
}