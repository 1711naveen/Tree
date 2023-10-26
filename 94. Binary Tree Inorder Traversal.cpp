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
    vector<int> vec;    

    void inorder(TreeNode* p)
    {
        if(p!=NULL){
            inorder(p->left);
            vec.push_back(p->val);
            inorder(p->right);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return vec;
    }
};