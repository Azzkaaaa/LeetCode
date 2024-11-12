bool isSubsequence(char* s, char* t) {
    int i;
    int j;
    int length1 = strlen(t);
    int length2 = strlen(s);
    i = 0;
    j = 0;
    while (i < length2 && j < length1){
        if (s[i] == t[j]){
            i++;
            j++;
        }else {
            j++;
        }
    }
    if (i == length2){
        return true;
    }else {
        return false;
    }
}