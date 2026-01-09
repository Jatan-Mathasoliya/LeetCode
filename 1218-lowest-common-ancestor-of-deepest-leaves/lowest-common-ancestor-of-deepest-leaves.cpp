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
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(!root) return nullptr;

        unordered_map<TreeNode*, TreeNode*> parents;
        queue<TreeNode*> q;
        q.push(root);

        parents[root] = nullptr;

        vector<TreeNode*> lastlevel;

        while(!q.empty()){

            int size = q.size();
            lastlevel.clear();
            for(int i=0; i<size; i++){
                TreeNode* node = q.front();
                q.pop();

                lastlevel.push_back(node);

                if(node->left){
                    parents[node->left] = node;
                    q.push(node->left);
                }
                if(node->right){
                    parents[node->right] = node;
                    q.push(node->right);
                }
            }
        }

        unordered_set<TreeNode*> deepest(lastlevel.begin(), lastlevel.end());

        while(deepest.size() > 1){
            unordered_set<TreeNode*> next;
            for(auto node:deepest){
                next.insert(parents[node]);
            }
            deepest = next;
        }

        return *deepest.begin();
    }
};