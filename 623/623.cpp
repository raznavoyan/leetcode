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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        return rowAdder(root, val, depth);
    }

    TreeNode* rowAdder(TreeNode* root, int val, int depth) {
         if(depth == 1){
            return new TreeNode(val,root,nullptr);
        }
        if (!root) {
            return nullptr;
        }

        if(depth == 2){
            root->left  = new TreeNode(val, root->left, nullptr);
            root->right = new TreeNode(val, nullptr, root->right);
        }else{        
            root->left = rowAdder(root->left, val, depth - 1);
            root->right = rowAdder(root->right, val, depth - 1);
        }
        
        return root;
    }
};
