int dominantIndex(int* nums, int numsSize) {
    int i;
    int max;
    int idx;
    idx = 0;
    max = nums[0];
    for (i = 1; i < numsSize; i++){
        if (nums[i] > max){
            max = nums[i];
            idx = i;
        }
    }
    for (i = 0; i < numsSize; i++){
        if (nums[i] != max){
            if (nums[i] * 2 > max){
                return -1;
            }
        }
    }
    return idx;
}