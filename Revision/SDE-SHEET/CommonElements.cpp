// https://www.geeksforgeeks.org/problems/common-elements5420/1

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        // Your code here
        vector<int> vec;
        unordered_map<int, int> mp;
        for (int i = 0; i < v1.size(); i++) {
            mp[v1[i]]++;
        }
        for (int i = 0; i < v2.size(); i++){
            if (mp.find(v2[i]) != mp.end() && mp[v2[i]] > 0) {
                mp[v2[i]]--;
                vec.push_back(v2[i]);
            }
        }
        sort(vec.begin(), vec.end());
        return vec;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int m;
        cin>>m;
        vector<int>v2(m,0);
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        Solution ob;
        vector<int>result;
        result=ob.common_element(v1,v2);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}
// } Driver Code Ends