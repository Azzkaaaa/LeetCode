int findLengthOfLCIS(int* nums, int numsSize) {
    int i;
    int ctr1;
    int ctr2;
    ctr1 = 1;
    ctr2 = 0;
    if (numsSize == 1){
        return numsSize;
    }
    for (i = 0; i < numsSize - 1; i++){
        if (nums[i] < nums[i + 1]){
            ctr1++;
        }
        if ((nums[i] >= nums[i + 1]) || (i == numsSize - 2 && nums[i] < nums[i + 1])){
            if (ctr1 > ctr2){
                ctr2 = ctr1;
            }
            ctr1 = 1;
        }
    }
    
    return ctr2;
}