int printPrimesInRange(int x, int y){
    int i, j;
    for (i=2; i<n; i++){
        for (j=0; j<=i; j++){
            if (i%j){
                break;
            }
            printf("%d", i);
        }
    }
}