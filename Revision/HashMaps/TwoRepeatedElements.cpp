// https://www.geeksforgeeks.org/problems/two-repeated-elements-1587115621/1?page=7&difficulty=Medium&sortBy=submissions

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        // Your code here
        map<int, int> mp;
        vector<int> vec;
        for(int i=0; i<n+2; i++){
            mp[arr[i]]++;
            if(mp[arr[i]] == 2){
                vec.push_back(arr[i]);
            }
        }
        return vec;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    return 0;
}

// } Driver Code Ends