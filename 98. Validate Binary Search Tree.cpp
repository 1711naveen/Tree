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
    bool helper(TreeNode *p, long long max, long long min)
    {
        if(p == NULL)
        {
            return true;
        }

        if(p->val>min && p->val<max)
        {
            bool t1 = helper(p->left,p->val,min);
            bool t2 = helper(p->right,max,p->val);
            if(t1 && t2)
                return true;
            else
                return false;
        }
        return false;
    }

    bool isValidBST(TreeNode* root) {
        return helper(root,LONG_MAX,LONG_MIN);
    }
};