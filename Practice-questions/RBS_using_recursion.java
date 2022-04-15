// ROTATED BINARY SEARCH USING RECURSION

package com.akshat;

public class RBS_using_recursion {

    public static void main(String[] args) {

        int[] arr = {5, 6, 7, 8, 9, 1, 2, 3};
        int target = 8;
        System.out.println(rbs(arr, target, 0, arr.length-1));

    }

    static int rbs(int[] arr, int target, int start, int end){
        if (start > end){
            return -1;
        }
        int mid = start+(end-start)/2;
        if(arr[mid] == target){
            return mid;
        }
        if (arr[start] <= arr[mid]){
            if (arr[start] <= target && arr[mid] >= target){
                return rbs(arr, target, start, mid+1);
            }
            else{
                return rbs(arr, target, mid-1, end);
            }
        }
        if (arr[mid] <= target && arr[end] >= target){
            return rbs(arr, target, mid+1, end);
        }
        return rbs(arr, target, start, mid+1);
    }

}
