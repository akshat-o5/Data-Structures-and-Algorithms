#include <iostream>
#include <climits>

using namespace std;

void sort(int arr[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main() {

    int arr[7] = {0, 1, 0, 1, 1, 0, 0}; 

    sort(arr, 7);  

    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
