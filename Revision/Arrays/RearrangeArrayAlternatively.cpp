// https://www.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1?page=5&sortBy=submissions

//{ Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int i = 0;
    	int j = n-1;
    	vector<long long> vec;
    	while(i<=j){
    	    vec.push_back(arr[j]);
    	    j--;
    	    if(i<=j){
    	        vec.push_back(arr[i]);
    	        i++;
    	    }
    	}
    	for(int i=0; i<n; i++){
    	    arr[i] = vec[i];
    	}
    }
};

//{ Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 

// } Driver Code Ends