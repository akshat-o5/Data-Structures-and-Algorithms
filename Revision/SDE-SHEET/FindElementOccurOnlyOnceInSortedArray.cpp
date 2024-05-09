// https://www.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array0624/1

//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
        unordered_map<int, int> m;
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
        for(int i=0; i<n; i++){
            if(m[arr[i]] == 1){
                return arr[i];
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends