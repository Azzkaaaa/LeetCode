char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return 0;
    char *prefix = strs[0];
    for (int i = 1;i < strsSize;i++){
        int j = 0;
        while (prefix[j] != '\0' && strs[i][j] != '\0' && strs[i][j] == prefix[j]){
            j++;
        }
        prefix[j] = '\0';
    }
    return prefix;
}