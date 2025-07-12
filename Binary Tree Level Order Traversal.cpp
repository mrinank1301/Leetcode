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
    void levelmap(TreeNode* root, int level, map<int, vector<int>>& res) {
        if (root == NULL) return;
        res[level].push_back(root->val);
        levelmap(root->left, level + 1, res);
        levelmap(root->right, level + 1, res);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        map<int, vector<int>> res;
        levelmap(root, 0, res);
        vector<vector<int>> ans;
        for (auto p : res) {
            ans.push_back(p.second);
        }
        return ans;
    }
};