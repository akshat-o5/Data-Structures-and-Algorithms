/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <bits/stdc++.h>
using namespace std;

int mini(vector<int> vec){
    int start = 0;
    int end = vec.size()-1;
    int ans = INT_MAX;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(vec[start]<=vec[mid]){
            ans = min(ans, vec[start]);
            start = mid + 1;
        }
        else{
            ans = min(ans, vec[mid]);
            end = mid - 1;
        }
    }
    return ans;
}


int main()
{
    cout<<"Hello World"<<endl;
    
    vector<int> vec {7, 8, 2, 3, 3, 3, 4, 5, 6};
    
    int ans = mini(vec);
    cout<<ans<<endl;

    return 0;
}
