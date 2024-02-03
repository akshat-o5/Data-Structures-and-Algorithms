// https://leetcode.com/problems/subsets/description/


class Solution {
public:
    vector<vector<int>> subsets(vector<int>& v) {
        int n=v.size();
       int size=pow(2,n);
       vector<vector<int>> v1;
       for(int i=0;i<size;i++){
           vector<int>temp;
           for(int j=0;j<n;j++){
               if(i&(1<<j))
                   temp.push_back(v[j]);
           }
           v1.push_back(temp);
       }
       return v1;
    }
};