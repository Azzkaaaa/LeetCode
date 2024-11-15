int numJewelsInStones(char* jewels, char* stones) {
    int i;
    int j;
    int ctr;
    int length1 = strlen(jewels);
    int length2 = strlen(stones);
    ctr = 0;
    for (i = 0; i < length1; i++){
        for (j = 0; j < length2; j++){
            if (jewels[i] == stones[j]){
                ctr++;
            }
        }
    }
    return ctr;
}