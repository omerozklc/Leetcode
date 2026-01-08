class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if (!root) return 0;
        int result = 1,total = root->val, level = 1;
        queue<TreeNode*> values;
        values.push(root);
        while (!values.empty()) {
            int size = values.size();  
            int temp = 0;
            for (int i = 0; i < size; i++) {
                TreeNode* t = values.front();
                values.pop();
                temp += t->val;
                if (t->left) values.push(t->left);
                if (t->right) values.push(t->right);
            }
            if (temp > total) {
                total = temp;
                result = level;
            }
            level++;
        }
        return result;
    }
};
