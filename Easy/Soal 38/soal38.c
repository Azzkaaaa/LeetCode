int numIdenticalPairs(int* nums, int numsSize) {
    int i;
    int ctr;
    int j;
    for (i = 0; i < numsSize - 1; i++){
        for (j = i + 1; j < numsSize; j++){
            if (nums[i] == nums[j]){
                ctr++;
            }
        }
    }
    return ctr;
}