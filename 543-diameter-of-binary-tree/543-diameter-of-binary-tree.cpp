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
    int diameterOfBinaryTree(TreeNode* root) 
    {
        int res = optdiameter(root).first;
        return res;
    }
    
    private:
    
    pair<int,int>optdiameter(TreeNode* root)
{
    if(root == NULL)
    {
        pair<int,int>p = make_pair(0,0);
        return p;
    }
    
    pair<int,int> dialeft = optdiameter(root->left);
    pair<int,int> diaright = optdiameter(root->right);
    
   int op1 = dialeft.first;
   int op2 = diaright.first;
   
   int op3 = dialeft.second + diaright.second;
   
   pair<int,int> ans;
   ans.first = max(op1, max(op2,op3));
   ans.second = max(dialeft.second, diaright.second) + 1;
   
   return ans;
   
   
}
};