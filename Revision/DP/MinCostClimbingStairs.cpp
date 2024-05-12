// https://www.geeksforgeeks.org/problems/min-cost-climbing-stairs/1

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
    
    // Bottom Up Approach || Recursion + Memoization
    int solve(vector<int> &dp, vector<int>&cost ,int N){
        if(N==0){
            return cost[0];
        }
        if(N==1){
            return cost[1];
        }
        if(dp[N] != -1){
            return dp[N];
        }
        dp[N] = cost[N] + min(solve(dp, cost, N-1), solve(dp, cost, N-2));
        return dp[N];
    }
    
    int minCostClimbingStairs(vector<int>&cost ,int N) {
        //Write your code here
        vector<int> dp(N+1, -1);
        int ans = min(solve(dp, cost, N-1), solve(dp, cost, N-2));
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>cost(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>cost[i];
        }

        Solution ob;
        cout<<ob.minCostClimbingStairs(cost,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends