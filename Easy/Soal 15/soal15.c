int removeElement(int* nums, int numsSize, int val) {
    int i;
    int k;
    k = 0;
    if (numsSize == 0){
        return 0;
    }
    int array[numsSize];
    for (i = 0; i < numsSize; i++){
        if (nums[i] != val){
            array[k] = nums[i];
            k++;
        }
    }
    for (i = 0; i < k; i++){
        nums[i] = array[i];
    }
    return k;
}