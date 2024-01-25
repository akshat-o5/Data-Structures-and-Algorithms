#include <iostream>
#include <climits>

using namespace std;

int mini(int arr[], int n){
    int minimum = INT_MAX;
    for(int i=0; i<n; i++){
        minimum = min(arr[i], minimum);
    }
    return minimum;
}

int main() {

    int arr[5];

    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    cout<<mini(arr, 5)<<endl;
    
    return 0;
}
