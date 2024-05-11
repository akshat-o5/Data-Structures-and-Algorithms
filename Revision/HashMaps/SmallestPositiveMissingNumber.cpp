// https://www.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1?page=1&difficulty=Medium&sortBy=submissions


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        map<int, int> mp;
        for(int i=0; i<n; i++){
            if(arr[i]>0){
                mp[arr[i]]++;
            }
        }
        for(int i=1; i<=mp.size(); i++){
            if(mp.find(i) == mp.end()){
                return i;
            }
        }
        return mp.size() + 1;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends