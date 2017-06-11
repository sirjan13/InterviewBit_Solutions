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
vector<int> Solution::preorderTraversal(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> v;
    stack<TreeNode *> st;
    
    while(!st.empty() || A){
        if(A){
            v.push_back(A->val);
            if(A->right)
                st.push(A->right);
            A = A->left;
        }
        else{
            A = st.top();
            st.pop();
        }
    }
    return v;
}


