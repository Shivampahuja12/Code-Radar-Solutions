#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int maxElement, maxFreq = 0;
    for (int i=0; i<n; i++){
        int count = 0;
        for (int j=i+1; j<n; j++){
            if (a[i]==a[j]){
                count++;
            }
        }
        if (count > maxFreq){
            maxFreq = count;
            maxElement = a[i];
        }
    }
    printf("%d", maxFreq);
    return 0;
}