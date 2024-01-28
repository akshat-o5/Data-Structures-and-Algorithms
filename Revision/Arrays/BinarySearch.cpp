#include <iostream>
#include <climits>

using namespace std;

int search(int arr[], int n, int target){
    int start = 0;
    int end = n - 1;
    
    while(start <= end) {
        int mid = start + (end - start) / 2;
        
        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
}


int main() {

    int arr[7] = {1, 2, 3, 4, 5, 6, 7}; 
    int target = 6;

    cout<<search(arr, 7, target)<<endl;
    
    return 0;
}
