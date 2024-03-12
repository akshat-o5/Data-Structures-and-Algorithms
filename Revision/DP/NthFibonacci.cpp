// https://www.geeksforgeeks.org/problems/nth-fibonacci-number1335/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article



//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:

    // Using Top Down Approach Starts
    int dpSolve(int n, vector<int>& dpVec) {
        if (n == 0 || n == 1) {
            return n;
        }
        if (dpVec[n] != -1) {
            return dpVec[n];
        }
        dpVec[n] = (dpSolve(n - 1, dpVec) + dpSolve(n - 2, dpVec)) % 1000000007;
        return dpVec[n];
    }

    int nthFibonacci(int n) {
        // Initialize a vector to store computed Fibonacci numbers
        vector<int> dpVec(n + 1, -1);
        return dpSolve(n, dpVec);
    }
    // Using Top Down Approach Ends

    // Using Bottom Up Approach Starts
    int nthFibonacci(int n){
        vector<int> vec(n+1);
        vec[1]=1;
        vec[0]=0;
        for(int i=2; i<=n; i++){
            vec[i] = vec[i-1] + vec[i-2];
        }
        return vec[n];
    }
    // Using Bottom Up Approach Ends

    // Using Space Optimization Starts
    int nthFibonacci(int n){
        int prev1=1;
        int prev2=0;
        if(n==0){
            return 0;
        }
        for(int i=2; i<=n; i++){
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
    // Using Space Optimization Ends
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends