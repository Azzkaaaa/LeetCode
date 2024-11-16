int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int i;
    int j;
    int ctr;
    int max;
    max = 0;
    ctr = 0;
    for (i = 0; i < accountsSize; i++){
        for (j = 0; j < *accountsColSize; j++){
            ctr = ctr + accounts[i][j];
        }
        if (ctr > max){
            max = ctr;
        }
        ctr = 0;
    }
    return max;
}