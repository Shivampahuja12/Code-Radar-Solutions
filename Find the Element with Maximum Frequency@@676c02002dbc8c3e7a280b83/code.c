#include<stdio.h>
int main(){
    int n, count;
    scanf("%d", &n);
    int a[n];
    int maxfreqele = a[0], maxfreq = 0;
    for (int i=0; i<n; i++){
        count = 0;
        for (int j=i+1; j<n; j++){
            if (a[i] == a[j]){
                count++;
            }
        }
        if (count > maxfreq) {
            maxfreq = count;
            maxfreqele = a[i];
        }
    }
}