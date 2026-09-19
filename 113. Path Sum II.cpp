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
    void countNode(TreeNode* node, int treeSum, int targetSum, vector<int>& path,
    vector<vector<int>>& result) {
        treeSum += node->val;
        path.push_back(node->val);
        if (node->left == nullptr && node->right == nullptr) {
            if (treeSum == targetSum) {
                result.push_back(path);
            }
            path.pop_back();
            return;
        }
        if (node->left != nullptr) {
            countNode(node->left, treeSum, targetSum, path, result);
        }
        if (node->right != nullptr) {
            countNode(node->right, treeSum, targetSum, path, result);
        }
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        vector<int> path;
        if (root == nullptr) {
            return result;
        }
        countNode(root, 0, targetSum, path, result);
        return result;
    }
};