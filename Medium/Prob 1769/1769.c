/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minOperations(char* boxes, int* returnSize) {
    int length = strlen(boxes);
    int *ans = (int*)malloc(length * sizeof(int));
    int i;
    int j;
    int k;
    int ctr;
    *returnSize = length;
    for (i = 0; i < length; i++){
        ctr = 0;
        for (j = 0; j < length; j++){
            if (boxes[j] == '1'){
                ctr += abs(j - i);
            }
        }
        ans[i] = ctr;
    }
    return ans;
}