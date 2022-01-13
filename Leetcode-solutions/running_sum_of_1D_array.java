// RUNNING SUM OF 1D ARRAY
// URL: https://leetcode.com/problems/running-sum-of-1d-array/

package com.akshat;

import java.util.Arrays;

public class running_sum_of_1D_array {

    public static void main(String[] args) {

        int[] nums = {1, 2, 3, 4};

        System.out.println(Arrays.toString(runningSum(nums)));

    }

    static int[] runningSum(int[] nums) {
        // int sum = 0;
        for(int i=1; i<nums.length; i++){
            nums[i] = nums[i] + nums[i-1];
        }
        return nums;
    }

}
