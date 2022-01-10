// BINARY SEARCH
// https://leetcode.com/problems/binary-search/


package com.akshat;

public class binary_search {

    public static void main(String[] args) {

        int[] nums = {-1,0,3,5,9,12};
        int target = 9;

        int ans = search(nums, target);

        System.out.println(ans);

    }

    static int search(int[] nums, int target) {
        int start=0;
        int end=nums.length-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(target<nums[mid]){
                end=mid-1;
            }
            else if(target>nums[mid]){
                start=mid+1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }

}
