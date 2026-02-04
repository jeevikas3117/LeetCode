/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int countNodes(struct TreeNode* root) {
    if(root==NULL){
        return 0;
    }
    int count=0;
    count+=countNodes(root->left);
    count++;
    count+=countNodes(root->right);
    return count;
}