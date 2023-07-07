class Solution {
public:

    int firstocc(vector<int>& nums, int target){
        int start = 0;
        int end = nums.size() - 1;
        int first = -1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid] == target){
                first = mid;
                end = mid - 1;
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return first;
    }

    int lastocc(vector<int>& nums, int target){
        int start = 0;
        int end = nums.size() - 1;
        int last = -1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid] == target){
                last = mid;
                start = mid + 1;
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return last;
    }


    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> vec;
        if(nums.size() == 0){
            vec.push_back(-1);
            vec.push_back(-1);
        }
        else{
            int first = firstocc(nums, target);
            vec.push_back(first);
            int last = lastocc(nums, target);
            vec.push_back(last);
        }
        return vec;
    }
};
