

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int i;
    int k;
    int j;
    j = n;
    k = 0;
    *returnSize = 2 * n;
    int *arr = (int*)malloc(*returnSize * sizeof(int));
    for (i = 0; i < n; i++){
        arr[k++] = nums[i];
        arr[k++] = nums[i + n];
    }
    return arr;
}
