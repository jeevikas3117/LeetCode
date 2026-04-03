/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int a, int b) {
    return (a > b) ? a : b;
}

int height(struct TreeNode* root, int* diameter) {
    if (root == NULL)
        return 0;
    int lh = height(root->left, diameter);
    int rh = height(root->right, diameter);
    if (lh + rh > *diameter)
        *diameter = lh + rh;
    return 1 + max(lh, rh);
}

int diameterOfBinaryTree(struct TreeNode* root) {
    int diameter = 0;
    height(root, &diameter);
    return diameter;
}