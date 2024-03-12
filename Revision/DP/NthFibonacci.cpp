// https://www.geeksforgeeks.org/problems/nth-fibonacci-number1335/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article



//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
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