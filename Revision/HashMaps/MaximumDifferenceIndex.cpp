// https://www.geeksforgeeks.org/problems/maximum-difference-10429/1?page=1&category=Map&sortBy=difficulty

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int maxDiffIndex(int A[], int N)
    {
        map<int, vector<int>> m;
        for(int i=0; i<N; i++){
            m[A[i]].push_back(i);
        }
        int maxDiff = -1;

        for (auto& entry : m) {
            vector<int>& indices = entry.second;
            int diff = indices.back() - indices.front();
            maxDiff = max(maxDiff, diff);
        }

        return maxDiff;

    }
};

//{ Driver Code Starts.

int main()
 {
     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int a[n];
         for(int i=0;i<n;i++)
            cin>>a[i];
         Solution ob;
         cout<<ob.maxDiffIndex(a, n)<<"\n";
     }
	return 0;
}
// } Driver Code Ends