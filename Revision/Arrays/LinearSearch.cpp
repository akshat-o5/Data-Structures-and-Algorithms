#include <iostream>
#include <climits>

using namespace std;

bool search(int arr[], int n, int target){
    for (int i = 0; i < n; i++)
    {
        if ((arr[i]==target))
        {
            return true;
        }
        
    }

    return false;
    
}

int main() {

    int arr[5];

    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;  

    cout<<search(arr, 5, target)<<endl;
    
    return 0;
}
