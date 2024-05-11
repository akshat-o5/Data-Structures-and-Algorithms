// https://www.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1?page=4&difficulty=Medium&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int search(int A[], int l, int h, int key) {
        // l: The starting index
        // h: The ending index, you have to search the key in this range

        // complete the function here
        vector<int> vec(A, A + h+1); 
        auto it =  std::find(vec.begin(), vec.end(), key);
        if(it!=vec.end()){
            return (it-vec.begin());
        }
        else{
            return -1;
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
    return 0;
}
// } Driver Code Ends