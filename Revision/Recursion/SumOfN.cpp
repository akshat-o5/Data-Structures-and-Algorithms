// // Prameterized RECURSION

// #include<iostream>
// using namespace std;

// void print(int i, int sum){
//     if(i<1){
//         cout<<sum<<endl;
//         return;
//     }
//     print(i-1, sum+i);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     print(n, 0);
//     return 0;
// }




// Functional RECURSION

#include<iostream>
using namespace std;

int print(int n){
    if(n==0){
        return 0;
    }
    return n+print(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<print(n)<<endl;
    return 0;
}