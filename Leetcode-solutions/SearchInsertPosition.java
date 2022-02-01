// Search Insert Position
// URL : https://leetcode.com/problems/search-insert-position/


package com.akshat;

public class SearchInsertPosition {

    public static void main(String[] args) {

        int[] nums = {1, 3, 5, 6};
        int target = 2;

        System.out.println(searchInsert(nums, target));

    }

    static int searchInsert(int[] nums, int target){
        if (target > nums[nums.length-1]){
            return nums.length;
        }
        int start = 0;
        int end = nums.length - 1;
        while (start <= end){
            int mid = start + (end - start) / 2;
            if (target < nums[mid]){
                end = mid - 1;
            }
            else if (target > nums[mid]){
                start = mid + 1;
            }
            else{
                return mid;
            }
        }
        return start;
    }

}
