class Solution {
public:
   
   int ans = INT_MIN;
   
   int maxsum(TreeNode* root){

    if(!root) return 0;

    int left = max(0,maxsum(root->left));
    int right = max(0,maxsum(root->right));

     ans = max(ans,left+right+root->val );

     return root->val + max(left ,right); 
   }
 

    int maxPathSum(TreeNode* root) {
        maxsum(root);
        return ans;
        
    }
};