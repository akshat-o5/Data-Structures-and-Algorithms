#include <iostream>
#include <climits>

using namespace std;


// // for 1D Array
// bool search(int arr[], int n, int target){
//     for (int i = 0; i < n; i++)
//     {
//         if ((arr[i]==target))
//         {
//             return true;
//         }
        
//     }

//     return false;
    
// }

// int main() {

//     int arr[5];

//     for(int i=0; i<5; i++){
//         cin>>arr[i];
//     }

//     int target;
//     cin>>target;  

//     cout<<search(arr, 5, target)<<endl;
    
//     return 0;
// }














// For 2D Array
bool search(int arr[][3], int row, int col, int target){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]==target){
                return true;
            }
        }
    }

    return false;
    
}

int main() {

    int arr[3][3];

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin>>arr[row][col];
        }
        
    }
    

    int target;
    cin>>target;  

    cout<<search(arr, 3, 3, target)<<endl;
    
    return 0;
}
