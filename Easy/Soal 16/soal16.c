#include <stdio.h>


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i;
    int j;
    int a;
    int tmp;
    a =0;
    if (m == 0){
        for (i = 0; i < n; i++){
            nums1[i] = nums2[i];
            
        }
        return;
    }else if(n == 0){
        nums1 = nums1;
        return;
    }else{
        for (i = m; i < m + n; i++){
            nums1[i] = nums2[a];
            a++;
        }
    }
    for (i = 0; i < m + n; i++){
        for (j = i + 1; j < m + n; j++){
            if (nums1[i] > nums1[j]){
                tmp = nums1[j];
                nums1[j] = nums1[i];
                nums1[i] = tmp;
            }
        }
    }
}