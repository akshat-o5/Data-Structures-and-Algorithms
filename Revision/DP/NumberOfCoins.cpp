// https://www.geeksforgeeks.org/problems/number-of-coins1824/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	
    // Top Down Approach || Recursion + Memoization
    int solve(vector<int> &coins, vector<int> &dp, int M, int sum){
        if(sum==0){
            return 0;
        }
        if(sum<0){
            return INT_MAX;
        }
        if(dp[sum] != -1){
            return dp[sum];
        }
        int mini = INT_MAX;
        for(int i=0; i<M; i++){
            int ans = solve(coins, dp, M, sum-coins[i]);
            if(ans != INT_MAX){
                mini = min(mini, ans+1);
            }
            dp[sum]=mini;
        }
        return mini;
    }	

    // Bottom Up Approach || Tabulation
    int solve1(vector<int> &coins, int M, int sum) {
        vector<int> dp(sum+1, INT_MAX);
        dp[0] = 0;
        for(int i=1; i<=sum; i++) {
            for(int j=0; j<M; j++) {
                if(i-coins[j] >= 0 && dp[i-coins[j]] != INT_MAX)
                    dp[i] = min(dp[i], 1+dp[i-coins[j]]);
            }
        }
        if(dp[sum]==INT_MAX)
            return -1;
        return dp[sum];
    }    
	
	int minCoins(vector<int> &coins, int M, int V) 
	{ 
	    // Your code goes here

	    // vector<int> dp(V+1, -1);
	    // int ans = solve(coins, dp, M, V);
        // if(ans==INT_MAX){
        //     return -1;
        // }
        // return ans;

        return solve1(coins, M, V);
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        vector<int> coins(m);
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends