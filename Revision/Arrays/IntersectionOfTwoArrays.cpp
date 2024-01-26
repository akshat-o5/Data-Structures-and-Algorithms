// https://leetcode.com/problems/intersection-of-two-arrays/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n = nums1.size();
        int m = nums2.size();
        int i=0, j=0;
        vector<int> vec;
        while(i<n && j<m){
            if(nums1[i]==nums2[j]){
                vec.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        set<int> s;
        for(int i=0; i<vec.size(); i++){
            s.insert(vec[i]);
        }
        vector<int> ans(s.begin(), s.end());
        return ans;
    }
};