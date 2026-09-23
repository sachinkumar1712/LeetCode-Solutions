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
    // int sum = 0;
    // int helper(TreeNode* root,int  p, int q){
    //     if(root->val >= p && root->val <= q){
    //         sum += root->val;
    //     }else if(root->val > p && root->val>q) helper(root->left,p,q);
    //     else  helper(root->right,p,q);
    //     return sum;
    // }
    int rangeSumBST(TreeNode* root, int low, int high) {
       if(root == NULL) return 0;
       int sum = (root->val >=low && root->val<=high)?root->val:0;
       return sum + rangeSumBST(root->left,low,high) + rangeSumBST(root->right,low,high);
       
        
    }
};