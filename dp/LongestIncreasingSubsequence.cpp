/*
By:Sirjanpreet Singh Banga (sirjan13) 
*/


int bs(int *a,int l,int r,int x){
    while(r-l>1){
        int mid = l + (r-l)/2;
        if(a[mid]>=x)
            r = mid;
        else
            l = mid;
    }
    return r;
}


int Solution::lis(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int dp[A.size()+7];
    int n = A.size();
    dp[0] = A[0];
    int length = 1;
    for(int i=0;i<n;i++){
        if(A[i]<dp[0])
            dp[0] = A[i];
        else if(A[i]>dp[length-1])
            dp[length++]=A[i];
        else
            dp[bs(dp,-1,length-1,A[i])] = A[i];
    }
    return length;
}

