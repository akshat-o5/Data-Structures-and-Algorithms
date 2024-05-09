// https://www.geeksforgeeks.org/problems/design-hashmap/1?page=1&category=Map&sortBy=difficulty


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class MyHashMap {
public:
    /** Initialize your data structure here. */
    vector<int> vec;
    MyHashMap() {
        vec.resize(10e5, -1);    
    }

    /** value will always be non-negative. */
    void put(int key, int value) {
        vec[key] = value;
    }

    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        return vec[key];
    }

    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        vec[key] = -1;
    }

};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        MyHashMap obj;
        int q;
        cin >> q;
        while (q--) {
            string s;
            cin >> s;
            if (s == "put") {
                int key, val;
                cin >> key >> val;
                obj.put(key, val);
            }
            else if ( s == "remove") {
                int key;
                cin >> key;
                obj.remove(key);
            }
            else {
                int key;
                cin >> key;
                cout << obj.get(key) << endl;
            }
        }
}
    return 0;
}

// } Driver Code Ends