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

    bool countNode(TreeNode* node, int treeSum, int targetSum){
        treeSum+=node->val;
         if (node->left == nullptr && node->right == nullptr) {
            return treeSum == targetSum;
        }

        if(node->left!=nullptr){
            if(countNode(node->left, treeSum, targetSum)){
                return true;
            }
        }
        if(node->right!=nullptr){
             if(countNode(node->right, treeSum, targetSum)){
                return true;
            }
        }
        return false;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root!=nullptr){
            return countNode(root, 0, targetSum);
        }
        return false;
    }
}; 