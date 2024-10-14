int majorityElement(int* nums, int numsSize) {
    int i;
    int vote;
    int candidate;
    candidate = -1;
    vote = 0;
    for (i = 0; i < numsSize; i++){
        if (vote == 0){
            candidate = nums[i];
            vote = 1;
        }else{
            if (candidate == nums[i]){
                vote++;
            }else{
                vote--;
            }
        }
    }
    return candidate;
}
