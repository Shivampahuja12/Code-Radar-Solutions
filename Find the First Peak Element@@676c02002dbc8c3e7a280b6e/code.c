#include<stdio.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for (int i=1; i<n; i++){
        if (a[i]>a[i-1] && a[i] > a[i+1]) printf("%d", i);
    }
}