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
class Solution {
public:
    int solve(TreeNode* root,int &maxsum)
    {
        if(root==nullptr) return 0;
        
        int lsum=solve(root->left,maxsum);
        int rsum=solve(root->right,maxsum);
        
        if(lsum<0) lsum=0;
        if(rsum<0) rsum=0;
        maxsum=max(maxsum,lsum+rsum+root->val);
        
        return root->val+max(lsum,rsum);
        
    }
    int maxPathSum(TreeNode* root) {
        int maxsum=INT_MIN;
        solve(root,maxsum);
       return maxsum;
    }
};