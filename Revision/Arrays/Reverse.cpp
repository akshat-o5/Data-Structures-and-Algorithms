#include <iostream>
#include <climits>

using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {

    int arr[5];

    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    reverse(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
