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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int output=0;
        preorder(root,low,high,output);
        return output;
    }
    void preorder(TreeNode* root, int low, int high,int& output){
        if(root==NULL){
            return;
        }
        if(root -> val <= high && root -> val >= low){
            output+=root-> val;
        }
        preorder(root->left,low,high,output);
        preorder(root->right,low,high,output);
    }
};

// used preorder