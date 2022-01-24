// Rotated Binary Search with Duplicate Values

package com.akshat;

public class RBSwithDuplicates {

    public static void main(String[] args) {

        int[] nums = {2, 9, 3, 2, 2, 2};
        int target = 3;

        System.out.println(search(nums, target));

    }

    static int search(int[] nums, int target) {
        int pivot = findPivotWithDuplicates(nums);
        if (pivot == -1){
            return bs(nums, target, 0, nums.length-1);
        }
        if (nums[pivot] == target){
            return pivot;
        }
        if (target >= nums[0]){
            return bs(nums, target, 0, pivot-1);
        }
        return bs(nums, target, pivot+1, nums.length-1);
    }

    static int bs(int[] nums, int target, int start, int end){
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
        return -1;
    }

    static int findPivotWithDuplicates(int[] arr) {
        int start = 0;
        int end = arr.length - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            // 4 cases over here
            if (mid < end && arr[mid] > arr[mid + 1]) {
                return mid;
            }
            if (mid > start && arr[mid] < arr[mid - 1]) {
                return mid-1;
            }

            // if elements at middle, start, end are equal then just skip the duplicates
            if (arr[mid] == arr[start] && arr[mid] == arr[end]) {
                // skip the duplicates
                // NOTE: what if these elements at start and end were the pivot??
                // check if start is pivot
                if (arr[start] > arr[start + 1]) {
                    return start;
                }
                start++;

                // check whether end is pivot
                if (arr[end] < arr[end - 1]) {
                    return end - 1;
                }
                end--;
            }
            // left side is sorted, so pivot should be in right
            else if(arr[start] < arr[mid] || (arr[start] == arr[mid] && arr[mid] > arr[end])) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }

}
