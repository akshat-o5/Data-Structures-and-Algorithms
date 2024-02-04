#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];

    // row wise input
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }

    // // row wise print
    // for(int row=0; row<3; row++){
    //     for(int col=0; col<3; col++){
    //         cout<<arr[row][col]<<" ";
    //     }
    //     cout<<endl;
    // }

    // col wise print
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<arr[col][row]<<" ";
        }
        cout<<endl;
    }

    return 0;
}