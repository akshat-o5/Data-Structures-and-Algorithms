// https://www.geeksforgeeks.org/problems/k-largest-elements4206/1?page=5&difficulty=Medium&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int> vec(arr, arr+n);
	    vector<int> ans;
	    sort(vec.begin(), vec.end());
	    for(int i=n-1; i>=n-k; i--){
	        ans.push_back(vec[i]);
	    }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends