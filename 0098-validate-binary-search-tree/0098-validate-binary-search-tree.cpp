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
    class Triplet{
        public:
        long long maxi;
        long long mini;
        bool isBST;
        Triplet(long long maxi,long long mini,bool isBST){
            this->maxi = maxi;
            this->mini = mini;
            this->isBST = isBST;
        }

    };
    Triplet maxMinIsBST(TreeNode* root){
        if(root == NULL) return Triplet(LLONG_MIN, LLONG_MAX,true);
        Triplet left = maxMinIsBST(root->left);
        Triplet right = maxMinIsBST(root->right);
        long long val = root->val;
        long long  mx = max(val,max(left.maxi,right.maxi));
        long long  mn = min(val,min(left.mini,right.mini));
        bool isBST = (val > left.maxi && val< right.mini) && left.isBST && right.isBST;
        return Triplet(mx,mn,isBST);
    }
    bool isValidBST(TreeNode* root) {
        Triplet ans = maxMinIsBST(root);
        return ans.isBST;
    }
};