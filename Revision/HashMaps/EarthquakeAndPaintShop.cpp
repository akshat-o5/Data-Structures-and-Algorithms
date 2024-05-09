// https://www.geeksforgeeks.org/problems/earthquake-and-the-paint-shop4518/1?page=1&category=Map&sortBy=difficulty

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

struct alphanumeric {
    string name;
    int count;
};
class Solution {
  public:
    vector<alphanumeric> sortedStrings(int N, vector<string> A) {
        // code here
        vector<alphanumeric> ans;
        map<string,int> m;
        for(int i=0;i<N;i++)
        {
            m[A[i]]++;
        }
        
        for(auto cc:m)
        {
            alphanumeric o1;
            o1.name=cc.first;
            o1.count=cc.second;
            ans.push_back(o1);
            
        }
        return(ans);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        cin.ignore();
        vector<string> v;
        for (int i = 0; i < N; i++) {
            string s;
            getline(cin, s);
            v.push_back(s);
        }
        Solution ob;
        vector<alphanumeric> ans = ob.sortedStrings(N, v);
        for (auto u : ans) cout << u.name << " " << u.count << "\n";
    }
}
// } Driver Code Ends