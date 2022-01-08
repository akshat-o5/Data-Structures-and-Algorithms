// BINARY SEARCH

package com.akshat;

import java.util.Arrays;
import java.util.Scanner;

public class binarySearch {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.println("Enter the length of an array: ");
        int n = in.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements of the array in ascending order: ");
        for(int i=0; i<n; i++) {
            arr[i] = in.nextInt();
        }
        System.out.println(Arrays.toString(arr));
        System.out.println("Enter the target element: ");
        int target = in.nextInt();

        int ans = binarySearch(arr, target);
        System.out.println(ans);


    }

    static int binarySearch(int[]arr, int target){
        int start=0;
        int end= arr.length-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(target<arr[mid]){
                end=mid-1;
            } else if (target > arr[mid]) {
                start=mid+1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }


}
