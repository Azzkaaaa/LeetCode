/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int* sorted = (int*)malloc(numsSize * sizeof(int));
    int* ans = (int*)malloc(numsSize * sizeof(int));
    int i, j;


    for (i = 0; i < numsSize; i++) {
        sorted[i] = nums[i];
    }


    for (i = 0; i < numsSize - 1; i++) {
        for (j = 0; j < numsSize - i - 1; j++) {
            if (sorted[j] > sorted[j + 1]) {
                int temp = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temp;
            }
        }
    }


    for (i = 0; i < numsSize; i++) {
        for (j = 0; j < numsSize; j++) {
            if (nums[i] == sorted[j]) {
                ans[i] = j; 
                break;
            }
        }
    }

    *returnSize = numsSize;
    free(sorted);
    return ans;
}