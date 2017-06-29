/*
By:Sirjanpreet Singh Banga (sirjan13) 
*/


int Solution::singleNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int xorsum = A[0];
    for(int i=1;i<A.size();i++){
        xorsum = xorsum ^ A[i];
    }
    return xorsum;
}

