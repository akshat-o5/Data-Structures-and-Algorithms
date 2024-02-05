#include<iostream>
#include <climits>
using namespace std;

int maxRowSum(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < row; i++)
    {
        int sum=0;
        for (int j = 0; j < col; j++)
        {
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=i;
        }
    }
    cout<<maxi<<endl;
    return rowIndex;
}

void rowSum(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";                         // 6 15 24
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

    // rowSum(arr, 3, 3);           

    cout<<maxRowSum(arr, 3, 3)<<endl;     

    return 0;
}