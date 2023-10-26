/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode *r=NULL;

    void preorder(TreeNode *p, int value){
        if(p!=NULL){
            if(p->val == value){
                r=p;
            }
            preorder(p->left,value);
            preorder(p->right,value);
        }
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        preorder(cloned, target->val);
        return r;
    }
};