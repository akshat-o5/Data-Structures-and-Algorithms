// Print Any One

// #include<iostream>
// #include<vector>

// using namespace std;

// bool printf(int index, vector<int> ans, vector<int> vec, int n, int s, int k){
//     if(index==n){
//         if (s==k)
//         {
//             for (int i = 0; i < ans.size(); i++)
//             {
//                 cout<<ans[i]<<" ";
//             }
//            cout<<endl; 
//            return true;
//         }
//         else{
//             return false;
//         }
//     }
//     ans.push_back(vec[index]);
//     s+=vec[index];
//     if((printf(index+1, ans, vec, n, s, k))==true){
//         return true;
//     }
//     ans.pop_back();
//     s-=vec[index];
//     if((printf(index+1, ans, vec, n, s, k))==true){
//         return true;
//     }
//     return false;
// }

// int main()
// {
//     vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(1);

//     for (int i = 0; i < vec.size(); i++)
//     {
//         cout<<vec[i]<<" ";
//     }
//     cout<<endl;

//     vector<int> ans;

//     int k=2;

//     cout<<endl;
    
//     cout<<"Subsequences= "<<endl;

//     printf(0, ans, vec, 3, 0, k);
    

//     return 0;
// }









// Print All

// #include<iostream>
// #include<vector>

// using namespace std;

// void printf(int index, vector<int> ans, vector<int> vec, int n, int s, int k){
//     if(index==n){
//         if (s==k)
//         {
//             for (int i = 0; i < ans.size(); i++)
//             {
//                 cout<<ans[i]<<" ";
//             }
//            cout<<endl; 
//         }
//         return;
//     }
//     ans.push_back(vec[index]);
//     s+=vec[index];
//     printf(index+1, ans, vec, n, s, k);
//     ans.pop_back();
//     s-=vec[index];
//     printf(index+1, ans, vec, n, s, k);
// }

// int main()
// {
//     vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(1);

//     for (int i = 0; i < vec.size(); i++)
//     {
//         cout<<vec[i]<<" ";
//     }
//     cout<<endl;

//     vector<int> ans;

//     int k=2;

//     cout<<endl;
    
//     cout<<"Subsequences= "<<endl;

//     printf(0, ans, vec, 3, 0, k);
    

//     return 0;
// }

















// Count Number of Subsequences

// #include<iostream>
// #include<vector>

// using namespace std;

// int printf(int index, vector<int> vec, int n, int s, int k){
//     if(index==n){
//         if (s==k)
//         {
//             return 1;
//         }
//         else{
//             return 0;
//         }
//     }
//     s+=vec[index];
//     int l = printf(index+1, vec, n, s, k);
//     s-=vec[index];
//     int r = printf(index+1, vec, n, s, k);
//     return l+r;
// }

// int main()
// {
//     vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(1);

//     for (int i = 0; i < vec.size(); i++)
//     {
//         cout<<vec[i]<<" ";
//     }
//     cout<<endl;

//     int k=2;

//     cout<<endl;
    
//     cout<<"Subsequences= "<<endl;

//     cout<<printf(0, vec, 3, 0, k)<<endl;
    

//     return 0;
// }














