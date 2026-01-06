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
 void preorder(struct TreeNode* root, int* arr, int* i) {
    if (root == NULL) return;
    arr[*i] = root->val;
    (*i)++;
    preorder(root->left, arr, i);
    preorder(root->right, arr, i);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(100 * sizeof(int));
    *returnSize = 0;
    preorder(root, result, returnSize);
    return result;
}