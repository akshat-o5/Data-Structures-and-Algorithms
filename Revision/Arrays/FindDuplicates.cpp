#include <iostream>
#include <climits>

using namespace std;

int duplicate(int arr[], int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    for(int i=1; i<n; i++){
        ans = ans^i;
    }
    return ans;
}

int main() {

    int arr[7] = {6, 2, 3, 4, 6, 5, 1}; 

    cout<<duplicate(arr, 7)<<endl;
    
    return 0;
}
