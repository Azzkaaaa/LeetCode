void moveZeroes(int* nums, int numsSize) {
    int j = 0;
    
    // Step 1: Memindahkan semua elemen non-zero ke depan array
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }
    
    // Step 2: Mengisi sisa array dengan nol
    for (int i = j; i < numsSize; i++) {
        nums[i] = 0;
    }
}