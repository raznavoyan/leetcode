/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& d) {
        int s = d.size();
        std::unordered_map<int, TreeNode*> ptr;
        for (int i = 0; i < s; ++i) {
            int tmp = d[i][1];
            ptr[tmp] = new TreeNode(tmp);
        }
        TreeNode* root = nullptr;
        for (int i = 0; i < s; ++i) {
            std::vector<int>& tmp = d[i];
            int parent = tmp[0];
            int child = tmp[1];
            bool isLeft = tmp[2];

            if (ptr.find(parent) != ptr.end()) {

                TreeNode* parentNode = ptr[parent];
                TreeNode* childNode = ptr[child];

                if (isLeft) {
                    parentNode->left = childNode;
                } else {
                    parentNode->right = childNode;
                }
            } else {
                root = new TreeNode(parent);
                ptr[parent] = root;
                --i;
            }
        }

        return root;
    }
};
