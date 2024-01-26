vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
    sort(arr.begin(),arr.end());
     vector<vector<int>>ans;
    set<vector<int>> s;
    for(int i=0;i<n;i++){
        int sum = K - arr[i];
        int j = i+1;
        int k = n-1;
        while(j<k){
                if(arr[j]+arr[k] == sum){
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    sort(temp.begin(),temp.end());
                    s.insert(temp);
                    j++;
                }
            else if(arr[j]+arr[k]<sum){
                j++;
            }
            else{
                k--;
            }
    }
    }
    for(auto val: s){
        ans.push_back(val);
    }
    return ans;
}
