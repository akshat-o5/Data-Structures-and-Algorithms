// https://www.geeksforgeeks.org/problems/twice-counter4236/1?page=1&category=Map&sortBy=difficulty

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        int countWords(string list[], int n)
        {
           //code here.
           unordered_map<string, int> mp;
           int count = 0;
           for(int i=0; i<n; i++){
               mp[list[i]]++;
           }
           auto it = mp.begin();
           while(it!=mp.end()){
               if(it->second == 2){
                   count++;
               }
               it++;
           }
           return count;
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
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends