// https://leetcode.com/problems/combination-sum/





class Solution {
public:

    void find(int idx, int target, vector<int>& candidates, vector<vector<int>> &ans, vector<int> &vec){
        if(idx==candidates.size()){
            if (target==0){
                ans.push_back(vec);
            }
            return;
        }
        if(candidates[idx]<=target){
            vec.push_back(candidates[idx]);
            find(idx, target-candidates[idx], candidates, ans, vec);
            vec.pop_back();
        }
        find(idx+1, target, candidates, ans, vec);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> vec;
        find(0, target, candidates, ans, vec);
        return ans;
    }
};