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
    void helper(TreeNode* root,vector<int>& ans){
         if(root==NULL) return;
         helper(root->left,ans);
         ans.push_back(root->val);
         helper(root->right,ans);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>ans;
        helper(root,ans);
        int n = ans.size();
        int p1=0;
        int p2=n-1;
        while(p1<p2){
            if(ans[p1]+ans[p2]==k){
                return true;
            }else if(ans[p1]+ans[p2]<k){
                p1++;
            }else{
                p2--;
            }
        }
        return false;
    }
};