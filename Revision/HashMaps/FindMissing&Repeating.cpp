// https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?page=1&difficulty=Medium&sortBy=submissions


//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        unordered_map<int, int> mp;
        int ans1 = 0; int ans2 = 0;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
            if(mp[arr[i]] == 2){
                ans1 = arr[i];
            }
        }
        for(int i=1; i<=n; i++){
            if(mp.find(i) == mp.end()){
                ans2 = i;
            }
        }
        return {ans1, ans2};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends