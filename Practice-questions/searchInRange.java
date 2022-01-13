// Search in a Range: In this question , we have to search for a character within a particular range in an array. If the target element is found, return it's index, otherwise return -1.

package com.akshat;

import java.util.Arrays;
import java.util.Scanner;

public class searchInRange {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.println("Enter the limit of an array: ");
        int n = in.nextInt();

        int[] arr = new int[n];

        System.out.println("Enter the elements of an array:");
        for (int i=0; i<n; i++){
            arr[i] = in.nextInt();
        }
        System.out.println("The given array is:"+ Arrays.toString(arr));

        System.out.println("Enter thr starting index: ");
        int start = in.nextInt();

        System.out.println("Enter the ending index: ");
        int end = in.nextInt();

        System.out.println("Enter the target element: ");
        int tar = in.nextInt();

        int ans = rangeSearch(arr, tar, start, end);
        System.out.println("Index: "+ans);

    }

    static int rangeSearch(int[] arr, int target, int start, int end){
        if (arr.length==0){
            return -1;
        }
        for (int idx=start; idx<=end; idx++){
            if (target==arr[idx]){
                return idx;
            }
        }
        return -1;
    }

}
