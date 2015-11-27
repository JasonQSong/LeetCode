#include<iostream>
#include<vector>
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helperSortedArrayToBST(nums, 0, (int)nums.size() - 1);
    }
    TreeNode* helperSortedArrayToBST(vector<int> &nums, int l, int r) {
        if (l < r) return NULL;
        int mid = (l + r) / 2;
        TreeNode *tl = helperSortedArrayToBST(nums, l, mid - 1);
        TreeNode *tr = helperSortedArrayToBST(nums, mid + 1, r);
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = tl;
        root->right = tr;
        return root;
    }
};