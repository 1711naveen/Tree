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

    void inorder(TreeNode *p){
        if(p){
            inorder(p->left);
            vec.push_back(p->val);
            inorder(p->right);
        }
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        TreeNode *ans=new TreeNode(), *t=NULL, *p=NULL;
        ans->val=vec[0];
        ans->left=NULL;
        ans->right=NULL;
        p=ans;
        for(int i=1;i<vec.size();i++){
            t=new TreeNode();
            t->val=vec[i];
            t->left=t->right=NULL;
            p->right=t;
            p=t;
        }
        return ans;
    }
};