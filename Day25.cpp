#include <iostream>
#include <climits>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};

class Solution {
public:
    bool helper(TreeNode* root, long long low, long long high) {
        if(!root) return true;
        if(root->val <= low || root->val >= high) return false;
        return helper(root->left, low, root->val) && helper(root->right, root->val, high);
    }
    bool isValidBST(TreeNode* root) {
        return helper(root, LLONG_MIN, LLONG_MAX);
    }
};

int main() {
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    Solution s;
    if(s.isValidBST(root))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}
