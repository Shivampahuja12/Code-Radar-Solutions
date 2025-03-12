#include<stdio.h>
int main(){
    int n, count;
    scanf("%d", &n);
    int a[n];
    int maxFreqEle = a[0], maxFreq = 0;
    for (int i=0; i<n; i++){
        count = 0;
        for (int j=i+1; j<n; j++){
            if (a[i] == a[j]){
                count++;
            }
        }
        if (count > maxFreq) {
            maxFreq = count;
            maxFreqEle = a[i];
        }
    }
    printf("%d", maxfreqele);
}