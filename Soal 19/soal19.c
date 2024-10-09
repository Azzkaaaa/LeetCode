/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void inorderHelper(struct TreeNode* root, int* result, int* returnSize) {
    if (root == NULL) {
        return;
    }
    
    // Traverse ke anak kiri terlebih dahulu
    inorderHelper(root->left, result, returnSize);
    
    // Simpan nilai node ke array result
    result[(*returnSize)++] = root->val;
    
    // Traverse ke anak kanan
    inorderHelper(root->right, result, returnSize);
}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    // Alokasikan memori untuk array hasil (anggap maksimal 100 node untuk sekarang)
    int* result = (int*)malloc(100 * sizeof(int));  
    *returnSize = 0;  // Inisialisasi ukuran hasil menjadi 0
    
    // Panggil fungsi helper untuk melakukan inorder traversal
    inorderHelper(root, result, returnSize);
    
    return result;  // Kembalikan array yang sudah diisi dengan hasil traversal
}