class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        
        // "count" : number of elements which follow the goven rule
        int count=0,low,high;
        for(auto x:arr1){
            // |arr1[i]- x| <= d    ,x= arr2[j]
            // so lowest value to find in arr2 is , low= arr[i]-d
            // and biggest value to find in arr2 is , high= arr[i]+d
            low= x-d, high= x+d;
            
            // finding iterator of low and high
            auto l= lower_bound(arr2.begin(), arr2.end(),low);
            auto h= lower_bound(arr2.begin(), arr2.end(),high);
            
            // check if l is equal to h , that mean range low to high is not present in arr2
            // also check is l iterator's value is not equal to low of high 
            if(l==h && (*l != low && *l != high)) count++;
        }
        
        return count;
    }
};
