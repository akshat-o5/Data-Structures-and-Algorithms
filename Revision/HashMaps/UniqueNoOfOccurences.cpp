// https://www.geeksforgeeks.org/problems/unique-frequencies-of-not/1?page=1&category=Map&sortBy=difficulty

//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        vector<int> vec;
        set<int> s;
        auto it = mp.begin();
        while(it != mp.end()){
            vec.push_back(it->second);
            s.insert(it->second);
            it++;
        }
        if(vec.size() == s.size()){
            return true;
        }
        else{
            return false;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends