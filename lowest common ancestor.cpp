/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
stack<int> s1,s2;
bool flag=false;
void dfs(TreeNode* parent,bool type,int match)
{
    if(parent==NULL || flag)
    {
        return ;
    }
    else
    {
        if(type)
        {
            s1.push(parent->val);
        }
        else
        {
            s2.push(parent->val);
        }
        if(parent->val==match)
        {
            flag=true;
            return;
        }
        else
        {
            dfs(parent->left,type,match);
            dfs(parent->right,type,match);
        }
    }
    if(!flag)
    {
        if(type)
        {
            s1.pop();
        }
        else
        {
            s2.pop();
        }
    }
}
int Solution::lca(TreeNode* A, int B, int C) {
    while(!s1.empty())
    {
        s1.pop();
    }
    while(!s2.empty())
    {
        s2.pop();
    }
    flag=false;
    dfs(A,true,B);
    flag=false;
    dfs(A,false,C);
    if(s1.size()==0 || s2.size()==0)
    {
        return -1;
    }
    while(!s1.empty() and !s2.empty())
    {
        if(s1.top()==s2.top())
        {
            return s1.top();
        }
        else if(s1.size()>s2.size())
        {
            s1.pop();
        }
        else
        {
            s2.pop();
        }
    }
}
