/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int i;
    int j;
    int ctr;
    int k;
    ctr = 0;
    k = 0;
    for (i = 0; i < wordsSize; i++){
        int length = strlen(words[i]);
        for (j = 0; j < length; j++){
            if (words[i][j] == x){
                ctr++;
                break;
            }
        }
    }
    *returnSize = ctr;
    int *arr = (int*)malloc(*returnSize * sizeof(int));
    for (i = 0; i < wordsSize; i++){
        int length = strlen(words[i]);
        for (j = 0; j < length; j++){
            if (words[i][j] == x){
                arr[k] = i;
                k++;
                break;
            }
        }
    }
    return arr;
}