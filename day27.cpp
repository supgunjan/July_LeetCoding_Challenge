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
    
    TreeNode* helper(int root_val_in,int l, int r, vector<int> &inorder,vector<int> &postorder)
    {
        if(root_val_in < 0 || l > r) return NULL;
        
        TreeNode* root = new TreeNode(postorder[root_val_in]);
        
        int index;
        for(int i = 0 ; i < inorder.size() ; i++)
        {
            if(inorder[i] == postorder[root_val_in])
            {
                index = i;
                break;
            }
        }
                root->left = helper(root_val_in-(r-index)-1,l,index-1,inorder,postorder);

        root->right = helper(root_val_in-1,index+1,r,inorder,postorder);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        return helper(postorder.size()-1,0,inorder.size()-1,inorder,postorder);
    }
};
