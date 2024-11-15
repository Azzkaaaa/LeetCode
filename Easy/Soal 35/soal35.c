/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    *returnSize = 2;
    double *arr = (double *)malloc((*returnSize) * sizeof(double));
    if (arr == NULL){
        return NULL;
    }
    arr[0] = celsius + 273.15;
    arr[1] = celsius * 1.80 + 32.00;
    return arr;
}