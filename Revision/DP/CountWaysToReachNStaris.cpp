// https://www.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter5639/1


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
		int nthStair(int n){
		    //  Code here
            // Bottom Up Approach, using DP Tabulation Methods
		    vector<int>dp(n+1,0);
		    dp[0]=dp[1]=1;
		    for(int i=2;i<=n;i++){
		        dp[i]=1+(dp[i-1],dp[i-2]);
		    }
		    return dp[n];
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends