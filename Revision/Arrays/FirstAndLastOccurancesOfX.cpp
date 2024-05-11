// https://www.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1?page=4&sortBy=submissions

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int> vec;
        vector<int> v(arr, arr + n);
        auto it = std::find(v.begin(), v.end(), x);
        if(it == v.end()){
            vec.push_back(-1);
            vec.push_back(-1);
            return vec;
        }
        auto it1 = lower_bound(v.begin(), v.end(), x);
        auto it2 = upper_bound(v.begin(), v.end(), x);
        vec.push_back(it1-v.begin());
        vec.push_back(it2-v.begin() -1);
        return vec;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends