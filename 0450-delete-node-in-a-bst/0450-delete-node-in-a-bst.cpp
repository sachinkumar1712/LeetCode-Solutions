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
    TreeNode* inorderPredecessor(TreeNode* root){
        TreeNode* pred = root->left;
        while(pred->right!=NULL){
            pred = pred->right;
        }
        return pred;
    }
     TreeNode* inorderSuccessor(TreeNode* root){
        TreeNode* succ= root->right;
        while(succ->left!=NULL){
            succ = succ->left;
        }
        return succ;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;
        if(root->val == key){
            //case 1: no child 
            if(root->left == NULL && root->right == NULL) return NULL;
            //case 2: 1 child
            if(root->left == NULL || root->right == NULL){
                if(root->left!=NULL) return root->left;
                else return root->right;
            }
            //case 3: 2child
            if(root->left!=NULL && root->right != NULL){
                //replace with root with its inorder predecessor/successor
                //after replacing delete the pred/suc
                TreeNode* succ =  inorderSuccessor(root);
                root->val = succ->val;
                root->right = deleteNode(root->right ,succ->val);
            }
        }
         //leaf child
        else if(root->val > key) root->left = deleteNode(root->left ,key);
        else root->right = deleteNode(root->right,key);
        return root;
    }
};