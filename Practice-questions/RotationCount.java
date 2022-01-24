// Find the number of Rotation Counts in a Rotated Array with Duplicates.

package com.akshat;

public class RotationCount {

    public static void main(String[] args) {

        int[] arr = {4, 5, 6, 7, 0, 1, 2};

        System.out.println(countRotations(arr));

    }

    static int countRotations(int[] arr){
        int pivot = findPivot(arr); // WE ARE ASSUMING THAT THERE ARE NO DUPLICATE ELEMENTS PRESENT IN THE ARRAY.
        return pivot+1;
    }

    //  USE THIS WHEN THERE ARE NO DUPLICATE ELEMENTS IN AN ARRAY.
    static int findPivot(int[] nums){
        int start = 0;
        int end = nums.length - 1;
        while (start <= end){
            int mid = start + (end - start) / 2;
            if (mid < end && nums[mid] > nums[mid + 1]){
                return mid;
            }
            if (mid > start && nums[mid] < nums[mid - 1]){
                return mid-1;
            }
            if (nums[mid] <= nums[start]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return -1;
    }

    //  USE THIS WHEN THERE ARE DUPLICATES ELEMENTS PRESENT IN AN ARRAY.
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
