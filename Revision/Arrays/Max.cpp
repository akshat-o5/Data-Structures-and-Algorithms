#include <iostream>
#include <climits>

using namespace std;

int maxi(int arr[], int n){
    int maximum = INT_MIN;
    for(int i=0; i<n; i++){
        maximum = max(arr[i], maximum);
    }
    return maximum;
}

int main() {

    int arr[5];

    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    cout<<maxi(arr, 5)<<endl;
    
    return 0;
}
