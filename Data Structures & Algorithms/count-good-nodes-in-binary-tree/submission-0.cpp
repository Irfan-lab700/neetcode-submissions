class Solution {
public:

    int solve(TreeNode* root, int maxSoFar) {

        if(root == NULL)
            return 0;

        int count = 0;

        if(root->val >= maxSoFar)
            count = 1;

        maxSoFar = max(maxSoFar, root->val);

        count += solve(root->left, maxSoFar);
        count += solve(root->right, maxSoFar);

        return count;
    }

    int goodNodes(TreeNode* root) {
        return solve(root, root->val);
    }
};
