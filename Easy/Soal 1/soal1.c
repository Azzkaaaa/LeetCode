/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Alokasikan memori untuk menampung hasil (dua indeks)
    int* result = (int*)malloc(2 * sizeof(int));
    
    // Loop untuk mencari dua angka yang jumlahnya sama dengan target
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                
                *returnSize = 2; // Mengatur ukuran hasil yang dikembalikan
                return result;
            }
        }
    }
    
    *returnSize = 0; // Jika tidak ada pasangan ditemukan
    return NULL;
}
