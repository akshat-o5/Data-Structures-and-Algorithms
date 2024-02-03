#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int> &vec, int low, int high){
    int pivot = vec[low];
    int i=low;
    int j=high;
    while(i<j){
        while(vec[i]<=vec[pivot] && i<=high-1){
            i++;
        }
        while(vec[j]>vec[pivot] && j>=low+1){
            j--;
        }
        if(i<j){
            swap(vec[i], vec[j]);
        }
    }
    swap(vec[low], vec[j]);
    return j;
}

void quickSort(vector<int> &vec, int low, int high){
    if(low<high){
        int pIndex = partition(vec, low, high);
        quickSort(vec, low, pIndex-1);
        quickSort(vec, pIndex+1, high);
    }
}

int main()
{

    vector<int> vec {8, 7, 6, 5, 4, 3, 2, 1};

    int n=vec.size();

    quickSort(vec, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}