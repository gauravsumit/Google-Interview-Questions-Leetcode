/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void dfs(TreeNode* parent)
{
    if(parent==NULL)
    {
        return;
    }
    dfs(parent->left);
    dfs(parent->right);
    TreeNode* temp=parent->left;
    parent->left=parent->right;
    parent->right=temp;
}
TreeNode* Solution::invertTree(TreeNode* A) {
    dfs(A);
    return A;
}
