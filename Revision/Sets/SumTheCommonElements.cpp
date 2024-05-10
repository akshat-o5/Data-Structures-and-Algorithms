// https://www.geeksforgeeks.org/problems/sum-the-common-elements/1?page=1&category=set&sortBy=difficulty

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int commonSum(int n1, int n2, vector<int> &arr1, vector<int> &arr2) {
        // code here
        set<int> s;
        for(int i=0; i<n1; i++){
            s.insert(arr1[i]);
        }
        int sum = 0;
        for(int i=0; i<n2; i++){
            if(s.count(arr2[i])){
                sum = ((sum%1000000007)+(arr2[i]%1000000007))%1000000007;
                s.erase(arr2[i]);
            }
        }
        return sum;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n1;
        scanf("%d",&n1);
        
        
        int n2;
        scanf("%d",&n2);
        
        
        vector<int> arr1(n1);
        Array::input(arr1,n1);
        
        
        vector<int> arr2(n2);
        Array::input(arr2,n2);
        
        Solution obj;
        int res = obj.commonSum(n1, n2, arr1, arr2);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends