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
vector<int> Solution::inorderTraversal(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> vs;
    stack<TreeNode*> s;
    
    TreeNode* curr = A;
    
    while(!s.empty() || curr){
        if(curr){
            s.push(curr);
            curr = curr->left;
        }
        else{
            TreeNode *temp = s.top();
            vs.push_back(temp->val);
            s.pop();
            curr = temp->right;
        }
    }
    return vs;

}
