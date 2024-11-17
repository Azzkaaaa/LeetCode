int thirdMax(int* nums, int numsSize) {
    long long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == first || nums[i] == second || nums[i] == third) {
            continue;  // Jika sudah ada dalam salah satu dari tiga nilai, lewati elemen ini.
        }
        
        if (nums[i] > first) {
            third = second;
            second = first;
            first = nums[i];
        } else if (nums[i] > second) {
            third = second;
            second = nums[i];
        } else if (nums[i] > third) {
            third = nums[i];
        }
    }

    // Jika ada ketiga nilai yang berbeda, kembalikan nilai ketiga
    return (third == LONG_MIN) ? (int)first : (int)third;
}