/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2;
    int *arr = (int*)malloc(*returnSize * sizeof(int));
    int i;
    int j;
    int k;
    k = 0;
    for (i = 0; i < numsSize; i++){
        for (j = i + 1; j < numsSize; j++){
            if (nums[i] == nums[j]){
                arr[k] = nums[i];
                k++;
            }
        }
    }
    return arr;
}