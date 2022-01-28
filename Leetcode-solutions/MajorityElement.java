// Majority Element
// URL: https://leetcode.com/problems/majority-element/


package com.akshat;

import java.lang.reflect.Array;
import java.util.Arrays;

public class MajorityElement {

    public static void main(String[] args) {

        int[] nums = {3, 2, 3};

        System.out.println(majorityElements(nums));

    }

    static int majorityElements(int[] nums){

//        int count = 1;
//        int maxCount = 1;
//        int element = 0;
        for (int i=0; i<nums.length-1; i++){
            for (int j=i+1; j>0; j--){
                if (nums[j] < nums[j-1]){
                    swap(nums, j, j-1);
                }
                else{
                    break;
                }
            }
        }

//        for (int i=0; i<nums.length; i++){
//            if (nums.length==1){
//                element = nums[i];
//            }
//        }
//
//        // CHECK IF THE PREVIOUS AND CURRENT NUMBERS ARE EQUAL. IF YES, COUNT++
//        for (int i=1; i<nums.length; i++){
//            if(nums[i] == nums[i-1]){
//                count++;
//            }
//            //CHECK FOR BREAKAGE CONDITION, THAT IS WHEN THE NUMBERS ARE NOT EQUAL OR WHEN THE ELEMENT IS LAST.
//            if (nums[i] != nums[i-1] || i == nums.length-1) {
//                if (maxCount < count) { // CHECK IF VALUE OF MAX COUNT IS LESS THAN COUNT. IF YES SWAP THE VALUE OF COUNT TO MAX COUNT.
//                    maxCount = count;
//                    element = nums[i - 1]; //DISPLAY TYHE ELEMENT WITH MOST NUMBER OF COUNTS
//                }
//                //PUT THE COUNTER VALUE BACK TO 1 FOR NEXT LOO
//                count = 1;
//            }
//        }
        //AT LAST RETURN THE ELEMENT
        return nums[nums.length/2];
    }

    static void swap(int[] nums, int first, int second){
        int temp = nums[first];
        nums[first] = nums[second];
        nums[second] = temp;
    }

//    static int getMax(int[] nums, int start, int end){
//        int max = start;
//        for (int i=start; i<=end; i++){
//            if (nums[max] < nums[i]){
//                max = i;
//            }
//        }
//        return max;
//    }

}
