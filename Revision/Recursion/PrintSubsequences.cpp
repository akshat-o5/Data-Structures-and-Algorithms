#include<iostream>
#include<vector>

using namespace std;

void printf(int index, vector<int> ans, vector<int> vec, int n){
    if(index==n){
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        if (ans.size()==0)
        {
            cout<<"{}"<<endl;
        }
        cout<<endl;
        return;
    }
    ans.push_back(vec[index]);
    printf(index+1, ans, vec, n);
    ans.pop_back();
    printf(index+1, ans, vec, n);
}

int main()
{
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(1);
    vec.push_back(2);

    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    vector<int> ans;

    cout<<endl;
    
    cout<<"Subsequences= "<<endl;

    printf(0, ans, vec, 3);
    

    return 0;
}