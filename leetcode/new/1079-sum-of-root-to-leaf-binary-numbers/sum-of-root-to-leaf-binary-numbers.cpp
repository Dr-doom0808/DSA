class Solution {
public:
    int dfs(TreeNode* node, int curr) {
        if (!node) return 0;

        // build binary number
        curr = (curr << 1) | node->val;

        // if leaf node
        if (!node->left && !node->right)
            return curr;

        return dfs(node->left, curr) +
               dfs(node->right, curr);
    }

    int sumRootToLeaf(TreeNode* root) {
        return dfs(root, 0);
    }
};