// POSITION OF AN ELEMENT IN AN INFINITE SORTED ARRAY :
//
// In this question , we have to find a target element whose length is not known. We will not do it via .length method.

// Approach: The main catch of this problem is that, each time we search for an element in a range,  if it is not found, we will double the range next time. This way we cover the whole array.

// Point to be noted: For our data, the program will sometime give index-out-of-bound exception as we manually cannot create an infinite array. but this will work for an infinite array.

// Concept used in code : Binary Search

package com.akshat;

public class infiniteArray {

    public static void main(String[] args) {

        int[] arr = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170};
        int target = 10;

        System.out.println("Index = "+ ans(arr, target));

    }

    static int ans(int[] arr, int target){
        // Here we start with a block of two elements
        int start = 0;
        int end = 1;
        while(target > arr[end]){
            //USE THIS.
            start = end;
            end = 2 * end;

            //OR USE THIS.
//            int temp = end + 1;
//            end = end + (end - start + 1) * 2;
//            start = temp;
        }
        return bs(arr, target, start, end);
    }

    static int bs(int[] arr, int target, int start, int end){
        while(start <= end){
            int mid = start + (end - start) / 2;
            if (target < arr[mid]){
                end = mid - 1;
            }
            else if (target > arr[mid]){
                start = mid + 1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }

}
