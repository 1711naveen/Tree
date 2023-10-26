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
    int sum=0;

    void preorder(TreeNode *p ,int low, int high){
        if(p!=NULL){
            if(p->val<=high && p->val>=low)
                sum = sum + p->val;
            preorder(p->left,low,high);
            preorder(p->right,low,high);
        }
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        preorder(root,low,high);
        return sum;
    }
};