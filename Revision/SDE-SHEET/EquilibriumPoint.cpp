// https://www.geeksforgeeks.org/problems/equilibrium-point-1587115620/1

//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int ans = -1;
        int left = 0;
        int right = 0;
        if(n==1 || n==2){
            ans = 1;
            return ans;
        }
        
        for(int i=0; i<n-1; i++){
            right = right + a[i+1];
        }
        for(int i=1; i<n; i++){
            left = left + a[i-1];
            right = right - a[i];
            if(left == right){
                ans = i+1;
                return ans;
            }
        }
        return ans;
    }
    
};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends