class Solution {
public:
    long long result = 0;
    int maxProduct(TreeNode* root) {
        long long high = fdfs(root);
        sdfs(root, high);
        return (int)(result % 1000000007);
    }
    long long fdfs(TreeNode* root){
        if(root == nullptr) return 0;
        long long left = fdfs(root->left);
        long long right = fdfs(root->right);
        root->val = root->val + left + right;
        return (long long)root->val;
    }
    void sdfs(TreeNode* root, long long high){
        if(root == nullptr) return;
        long long l = 0, r = 0;
        if(root->left) l = (high - root->left->val) * (root->left->val);
        if(root->right) r = (high - root->right->val) * (root->right->val);
        result = max(result, max(l, r));
        sdfs(root->left, high);
        sdfs(root->right, high);
    }

};
