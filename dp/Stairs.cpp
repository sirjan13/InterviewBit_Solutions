/*
By:Sirjanpreet Singh Banga (sirjan13) 
*/

int dp[100007];
int f(int n){
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    if(dp[n]!=-1)
        return dp[n];
    int ans = f(n-1) + f(n-2);
    return dp[n] = ans;
}

int Solution::climbStairs(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    memset(dp,-1,sizeof(dp));
    return f(A);
    
}

