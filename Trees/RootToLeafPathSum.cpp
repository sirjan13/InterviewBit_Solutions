/*
By:Sirjanpreet Singh Banga (sirjan13) 
*/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void check_sum(TreeNode * node, int sum,vector<vector<int>> &final,vector<int> &v){
    if(sum == 0 && node->left == NULL && node->right == NULL)
        final.push_back(v);

    if(node->left){
        v.push_back((node->left)->val);
        check_sum(node->left,sum-(node->left)->val,final,v);
        v.pop_back();
    }
    if(node->right){
        v.push_back(node->right->val);
        check_sum(node->right,sum-(node->right)->val,final,v);
        v.pop_back();
    }
}
vector<vector<int> > Solution::pathSum(TreeNode* root, int sum) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<int>>final;
    vector<int> v;
    
    if(root == NULL)
        return final;
    
    v.push_back(root->val);
    
    check_sum(root,sum-root->val,final,v);
    
    return final;
}

