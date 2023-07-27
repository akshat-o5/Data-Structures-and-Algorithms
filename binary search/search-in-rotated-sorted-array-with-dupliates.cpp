/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> vec, int k){
    int start = 0;
    int end = vec.size()-1;
    while(start <= end){
        int mid = start+(end-start)/2;
        if(vec[mid] == k){
            return true;
        }
        if(vec[mid]==vec[start] && vec[mid]==vec[end]){
            start++;
            end--;
            continue;
        }
        if(vec[start]<=vec[mid]){
            if(vec[start]<=k && vec[mid]>=k){
                end = mid-1;
            }
            else{
                start = mid + 1;
            }
        }
        else{
            if(vec[mid]<=k && vec[end]>=k){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return false;
}


int main()
{
    cout<<"Hello World"<<endl;
    
    vector<int> vec {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    
    bool ans = search(vec, 3);
    cout<<ans<<endl;

    return 0;
}
