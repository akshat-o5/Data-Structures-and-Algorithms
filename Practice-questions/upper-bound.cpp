// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int ub(vector<int> vec, int n){
    int start = 0;
    int end = vec.size() - 1;
    int ans = vec.size();
    while(start<=end){
        int mid = start+(end-start)/2;
        if(vec[mid]>n){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}


int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    
    vector<int> vec {3, 5, 7, 9, 11, 13};
    
    cout<<ub(vec, 10)<<endl;
    
    return 0;
}
