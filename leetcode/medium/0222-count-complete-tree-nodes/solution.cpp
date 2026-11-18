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
int LeftHeight(TreeNode *T){
    if(T==NULL)
    return 0;
   int lh=0;
    while(T!=NULL){
        lh++;
        T=T->left;
    }
    return lh;
}
int RightHeight(TreeNode *T){
    if(T==NULL)
    return 0;
   int rh=0;
    while(T!=NULL){
        rh++;
        T=T->right;
    }
    return rh;
}
    int countNodes(TreeNode* root) {
        if(root==NULL)
        return 0;

        int lh=LeftHeight(root);
        int rh=RightHeight(root);

        if(lh==rh)
        return(1<<lh)-1;

        return 1+countNodes(root->left)+countNodes(root->right);
    }
};