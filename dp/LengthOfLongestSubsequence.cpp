/*
By:Sirjanpreet Singh Banga (sirjan13) 
*/


int Solution::longestSubsequenceLength(const vector<int> &A) {
    if (a.size()==0)
        return 0;
    int dp[a.size()];
    for(int i=0;i<a.size();i++)
        dp[i] = 1;
    for(int i=1;i<a.size();i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j] && dp[i]<dp[j]+1)
                dp[i] = dp[j]+1;
        }
    }
    int dp1[a.size()];
    for(int i=0;i<a.size();i++)
        dp1[i] = 1;
    for(int i=a.size()-2;i>=0;i--){
        for(int j=a.size()-1;j>i;j--){
            if(a[i]>a[j] && dp1[i]<dp1[j]+1)
                dp1[i] = dp1[j]+1;
        }
    }
    int m = dp[0]+dp1[0]-1;
    for(int i=1;i<a.size();i++){
        m = max(m,(dp[i]+dp1[i]-1));
    }
    return m;
 
}

