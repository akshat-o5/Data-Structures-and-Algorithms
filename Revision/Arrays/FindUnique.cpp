#include <iostream>
#include <climits>

using namespace std;

int unique(int arr[], int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}

int main() {

    int arr[7] = {7, 3, 7, 2, 3, 9, 2}; 

    cout<<unique(arr, 7)<<endl;
    
    return 0;
}
