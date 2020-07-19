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

#define ull unsigned long long
class Solution {
public:
    
     ull widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        queue<pair<TreeNode*,ull>> q;
        q.push(make_pair(root,1));
        ull mx = 0;
        while(!q.empty())
        {
         
            ull  sz = q.size();
            ull diff = (q.back().second - q.front().second);
             mx = max(diff,mx);  
            while(sz--)
            {
                   pair<TreeNode*,ull> p = q.front();
                 q.pop();
              if(p.first->left) q.push(make_pair(p.first->left,(p.second*2)+1));
                if(p.first->right) q.push(make_pair(p.first->right,(p.second*2)+2));
                
            }
           
           
        }
        return mx+1;
    }
};
