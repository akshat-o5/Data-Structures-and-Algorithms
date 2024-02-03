// https://leetcode.com/problems/combination-sum-ii/submissions/1164796625/



class Solution {
public:

    void find(int index, int target, vector<int>& candidates, vector<vector<int>> &ans, vector<int> &vec){
        if(target==0){
            ans.push_back(vec);
            return;
        }
        for(int i=index; i<candidates.size(); i++){
            if(i>index && candidates[i]==candidates[i-1]){
                continue;
            }
            if(candidates[i]>target){
                break;
            }
            vec.push_back(candidates[i]);
            find(i+1, target-candidates[i], candidates, ans, vec);
            vec.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> vec;
        find(0, target, candidates, ans, vec);
        return ans;
    }
};