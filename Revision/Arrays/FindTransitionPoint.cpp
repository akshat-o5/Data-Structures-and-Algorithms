// https://www.geeksforgeeks.org/problems/find-transition-point-1587115620/1?page=4&sortBy=submissions


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        vector<int> vec(arr, arr + n); 
        auto it = std::find(vec.begin(), vec.end(), 1);
        if(it!=vec.end()){
            return (it-vec.begin());
        }
        else{
            return -1;
        }
    }
};

//{ Driver Code Starts.
int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends