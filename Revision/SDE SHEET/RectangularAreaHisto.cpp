// https://www.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    vector<long long> nextSmallerElement(long long arr[], int n)
{
    stack<long long>st;
    vector<long long>ans(n);
    st.push(-1);
    for(int i=n-1;i>=0;i--){
        if(st.top()==-1||arr[st.top()]<arr[i]){
            ans[i]=st.top();
        }
        else{
            while(1){
                if(st.top()==-1||arr[st.top()]<arr[i] )break;
                else st.pop();
            }
            ans[i]=st.top();
        }
        st.push(i);
    }
    return ans;
}

    vector<long long> prevSmallerElement(long long arr[], int n)
{
    stack<long long>st;
    vector<long long>ans(n);
    st.push(-1);
    for(int i=0;i<n;i++){
        if(st.top()==-1||arr[st.top()]<arr[i]){
            ans[i]=st.top();
        }
        else{
            while(1){
                if(st.top()==-1||arr[st.top()]<arr[i] )break;
                else st.pop();
            }
            ans[i]=st.top();
        }
        st.push(i);
    }
    return ans;
}

    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<long long>next(n);
        vector<long long>prev(n);
        
        next=nextSmallerElement(arr,n);
        prev=prevSmallerElement(arr,n);
        
        long long area=INT_MIN;
        for(int i=0;i<n;i++){
            long long l=arr[i];
            if(next[i]==-1)next[i]=n;
            long long b=next[i]-prev[i]-1;
            long long newarea=l*b;
            area=max(area,newarea);
        }
        return area;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends