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
    bool isEvenOddTree(TreeNode* root) {
        if (!root) {
            return true;
        }

        queue<TreeNode*> a;
        int level = 0;

        a.push(root);

        while (!a.empty()) {
            int n = a.size();
            int prev_val = (level % 2 == 0) ? numeric_limits<int>::min() : numeric_limits<int>::max();

            for (int i = 0; i < n; ++i) {
                TreeNode* node = a.front();
                a.pop();

                
                if ((level % 2 == 0 && (node->val % 2 == 0 || node->val <= prev_val)) ||
                    (level % 2 == 1 && (node->val % 2 == 1 || node->val >= prev_val))) {
                    return false;
                }

                prev_val = node->val;

                // Add children to the queue
                if (node->left) {
                    a.push(node->left);
                }
                if (node->right) {
                    a.push(node->right);
                }
            }

            level++;
        }

        return true;
    }
};