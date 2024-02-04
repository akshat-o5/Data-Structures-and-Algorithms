#include<iostream>
using namespace std;

void rowSum(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum+=arr[j][i];
        }
        cout<<sum<<" ";                         // 12 15 18
    }
    cout<<endl;
}

int main()
{
    int arr[3][3] = {
                        {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}
                    };

    rowSum(arr, 3, 3);                

    return 0;
}