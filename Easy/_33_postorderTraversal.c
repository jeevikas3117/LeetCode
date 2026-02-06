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
 void helper(struct TreeNode* root, int* arr, int* index) {
    if (root == NULL)
        return;
    helper(root->left, arr, index);
    helper(root->right, arr, index);
    arr[*index] = root->val;
    (*index)++;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr = (int*)malloc(sizeof(int) * 100);
    int index = 0;
    helper(root, arr, &index);
    *returnSize = index;
    return arr;
}