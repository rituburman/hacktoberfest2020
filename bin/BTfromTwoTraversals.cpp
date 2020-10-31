/*Given preorder and inorder traversal of a tree, construct the binary tree.

Example:
Input-
preorder = [3,9,20,15,7]
inorder = [9,3,15,20,7]
output-
   3
   / \
  9  20
    /  \
   15   7

Question URL: https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/

*/



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
    TreeNode* newtree(vector<int>& preorder,int x,int y, vector<int>& inorder, int a,int b){
        if(x>y || a>b){return NULL;}
        TreeNode *node = new TreeNode(preorder[x]);
        int temp=a;
        while(node->val != inorder[temp])temp++;
        node->left  = newtree(preorder,x+1,x+temp-a,inorder,a,temp-1);
        node->right  = newtree(preorder,x+temp-a+1,y,inorder,temp+1,b);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return newtree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
    }
};