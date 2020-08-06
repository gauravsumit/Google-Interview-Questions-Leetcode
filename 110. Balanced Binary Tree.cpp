/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

bool ans=true;
int dfs(TreeNode* ch)
{
    int left=0;
    int right=0;
    if(ch->left != NULL)
    {
        left += dfs(ch->left);
    }
    if(ch->right != NULL)
    {
        right += dfs(ch->right);
    }
    if(abs(left-right)>1)
    {
        ans=false;
    }
    return (max(left,right)+1);
}

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        ans=true;
        if(root != NULL)
        {
        dfs(root);
        }
        return ans;
    }
};