#include<iostream>
#include <climits>
using namespace std;

int maxColSum(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    int colIndex = -1;
    for (int i = 0; i < col; i++)
    {
        int sum=0;
        for (int j = 0; j < row; j++)
        {
            sum+=arr[j][i];
        }
        if(sum>maxi){
            maxi=sum;
            colIndex=i;
        }
    }
    cout<<maxi<<endl;
    return colIndex;
}

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

    cout<<maxColSum(arr, 3, 3)<<endl;

    return 0;
}