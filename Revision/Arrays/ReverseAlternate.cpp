#include <iostream>
#include <climits>

using namespace std;

void alternate(int arr[], int n){
    for(int i=0; i<n-1; i=i+2){
        swap(arr[i], arr[i+1]);
    }
}

int main() {

    int arr[5];

    for(int i=0; i<6; i++){
        cin>>arr[i];
    }

    alternate(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }    
    
    return 0;
}
