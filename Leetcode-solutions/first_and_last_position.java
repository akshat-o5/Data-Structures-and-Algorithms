// Find First and Last Position of Element in Sorted Array
// URL: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

package com.akshat;

import java.util.Arrays;

public class first_and_last_position {

    public static void main(String[] args) {

        int[] nums = {5, 7, 7, 8, 8, 10};
        int target = 8;

        System.out.println(Arrays.toString(searchRange(nums, target)));
        System.out.println(Arrays.toString(search1(nums, target)));


    }
    // BRUTEFORCE SOLUTION
    static int[] search1(int[] arr, int target){
        int[] ans = {-1, -1};
        if (arr.length == 0){
            return new int[] {-1, -1};
        }
        for (int i=0; i<arr.length; i++){
            if (arr[i] == target){
                ans[0] = i;
                break;
            }
        }
        for (int j=arr.length-1; j>=0; j--){
            if (arr[j] == target){
                ans[1] = j;
                break;
            }
        }
        return ans;
    }

    // USING BINARY SEARCH (OPTIMIZED SOLUTION)
    static int[] searchRange(int[] nums, int target) {
        int[] ans = {-1, -1};
        int start = bs(nums, target, true);
        int end = bs(nums, target, false);
        ans[0] = start;
        ans[1] = end;
        return ans;
    }

    static int bs(int[] nums, int target, boolean findStartIndex){
        int ans = -1;
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
                ans = mid;
                if (findStartIndex){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
        }
        return ans;
    }

}
