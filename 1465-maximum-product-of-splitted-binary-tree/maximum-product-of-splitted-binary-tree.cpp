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
    long long totalSum = 0;
    long long maxProductAns = 0;
    const int MOD = 1e9 + 7;

    long long getTotalSum(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        long long leftSum = getTotalSum(root->left);
        long long rightSum = getTotalSum(root->right);

        return root->val + leftSum + rightSum;
    }

    long long dfs(TreeNode* root){
        if(root == nullptr) return 0;

        long long leftSum = dfs(root->left);
        long long rightSum = dfs(root->right);

        long long subTreeSum = root->val + leftSum + rightSum;

        long long product = (totalSum - subTreeSum) * subTreeSum;

        maxProductAns = max(product, maxProductAns);

        return subTreeSum;
    }


    int maxProduct(TreeNode* root) {
        totalSum = getTotalSum(root);

        dfs(root);

        return maxProductAns % MOD;
    }
};