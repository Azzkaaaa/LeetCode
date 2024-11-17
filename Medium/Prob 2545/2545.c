/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** sortTheStudents(int** score, int scoreSize, int* scoreColSize, int k, int* returnSize, int** returnColumnSizes) {
    int i, j;
    
    int **ans = (int**)malloc(scoreSize * sizeof(int*));
    
    *returnColumnSizes = (int*)malloc(scoreSize * sizeof(int));
    *returnSize = scoreSize;

    for (i = 0; i < scoreSize; i++) {
        ans[i] = (int *)malloc(scoreColSize[i] * sizeof(int));

        for (j = 0; j < scoreColSize[i]; j++) {
            ans[i][j] = score[i][j];
        }

        returnColumnSizes[0][i] = scoreColSize[i];
    }

    for (i = 0; i < scoreSize; i++) {
        for (j = i + 1; j < scoreSize; j++) {
            if (ans[i][k] < ans[j][k]) {
                int* temp = ans[i];
                ans[i] = ans[j];
                ans[j] = temp;
            }
        }
    }

    return ans;
}
