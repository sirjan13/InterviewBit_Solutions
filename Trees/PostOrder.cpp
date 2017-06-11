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
vector<int> Solution::postorderTraversal(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> v;
    stack<TreeNode *> st;
    if(A==NULL)
        return v;
    st.push(A);
    while(!st.empty()){
        TreeNode * node = st.top();
        v.push_back(node->val);
        st.pop();
        if(node->left)
            st.push(node->left);
        if(node->right)
            st.push(node->right);
        }
    reverse(v.begin(),v.end());
    return v;
}

