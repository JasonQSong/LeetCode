#include<iostream>
using namespace std;
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        TreeNode *tl = root->left, *tr = root->right;
        int cl = 1, cr = 1;
        while (tl) {
            tl = tl->left;
            cl++;
        }
        while (tr) {
            tr = tr->right;
            cr++;
        }
        if (cl == cr) {
            return (1 << cl) - 1;
        }
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
};