class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> ans;

        if (!root)
            return ans;

        bool l2r = true;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int n = q.size();

            vector<int> level(n);

            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();

                int idx = l2r ? i : n - 1 - i;

                level[idx] = node->val;

                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            ans.push_back(level);
            l2r = !l2r;
        }

        return ans;
    }
};