// https://www.geeksforgeeks.org/problems/map-operations/1?page=1&category=Map&sortBy=difficulty


//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


map<int,int> mapInsert(int arr[],int n);
void mapDisplay(map<int,int>mp);
void mapErase(map<int,int>&mp,int x);


// } Driver Code Ends
//User function Template for C++


map<int,int> mapInsert(int arr[],int n)
{
    map<int,int>mp;
   //Insert arr[i] as key and i as value
    for(int i=0; i<n; i++){
        mp[arr[i]] = i;
    }
    
    return mp;
    
}


void mapDisplay(map<int,int>mp)
{
    //Print every key and value pair in a new line
    map<int, int>::iterator it = mp.begin();
    while(it != mp.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
 
}


void mapErase(map<int,int>&mp,int x)
{
   //Write the if and else condition to erase x from map
   map<int, int>::iterator it = mp.find(x);
   if(it != mp.end()){
       mp.erase(it);
       cout<<"erased "<<x;
   }
    
    //else condition
    else{
        cout<<"not found";
    }
    
    
    
    cout<<endl;
}

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n]; 
        for(int i=0;i<n;i++)
            cin>>arr[i]; //Taking input array
        
        map<int,int>mp=mapInsert(arr,n); //map insert function that returns a function
        mapDisplay(mp); //print the keys and values of the map
        int x;
        cin>>x; //element to be erased
        
        mapErase(mp,x); //the erase function
        mapDisplay(mp);
        
        
    }
	return 0;
}

// } Driver Code Ends