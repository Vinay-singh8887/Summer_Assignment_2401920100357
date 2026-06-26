lass Solution {
public:
    bool ismirror(TreeNode* p, TreeNode* q) {

        if(!p&&!q) return true;

        if (!p || !q) return false;

        if (p->val != q->val)
            return false;

        bool case1 = ismirror(p->left, q->right);
        bool case2 = ismirror(p->right, q->left);

        return case1 && case2;
    }

    bool isSymmetric(TreeNode* root) {
        if (!root)
            return true;

        return ismirror(root->left, root->right);
    }
};