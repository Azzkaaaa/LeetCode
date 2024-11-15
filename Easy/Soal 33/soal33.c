int scoreOfString(char* s) {
    int i;
    int j;
    int ctr;
    int kurang;
    int length = strlen(s);
    ctr = 0;
    j = 1;
    for (i = 0; i < length - 1; i++){
        kurang = s[i] - s[j];
        if (kurang < 0){
            kurang = kurang * -1;
        }
        ctr = ctr + kurang;
        j++;
    }
    return ctr;
}