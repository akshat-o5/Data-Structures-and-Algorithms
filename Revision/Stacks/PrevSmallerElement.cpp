// https://www.geeksforgeeks.org/problems/smallest-number-on-left3403/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article


//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        // code here
        stack<int> s;
        s.push(-1);
        vector<int> ans (n);
        
        for(int i=0; i<n; i++){
            int curr = a[i];
            while(s.top() >= curr){
                s.pop();
            }
            ans[i] = s.top();
            s.push(curr);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends