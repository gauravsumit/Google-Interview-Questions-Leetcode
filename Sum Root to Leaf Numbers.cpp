/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int mod=1003;
 int ans=0;
 void dfs(TreeNode* parent,int value)
 {
     if(parent==NULL)
     {
        return;
     }
     else if(parent->left==NULL and parent->right==NULL)
     {
         value*=10;
         value%=mod;
         value+=parent->val;
         value%=mod;
         //cout<<value<<"\n";
         ans+=value;
         ans%=mod;
     }
     else
     {
         value*=10;
         value%=mod;
         value+=parent->val;
         dfs(parent->left,value);
         dfs(parent->right,value);
     }
 }
int Solution::sumNumbers(TreeNode* A) {
    ans=0;
    dfs(A,0);
    return ans;
}





// (a+b)%m = a%m + b%m

// (a*b)%m =a%m * b%m





// 123%m    = (100%m + 20%m + 3%m)%m




//1 ->  10 + 2=12 -> 4 =120 + 4==124

// dfs()
