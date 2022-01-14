// Ceiling of a Number : It says that , in the given array, find the smallest number/element, greater than or equal to the target number/element.

package com.akshat;

import java.util.Arrays;
import java.util.Scanner;

public class ceiling_of_a_number {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.println("Enter the limit of an array: ");
        int n = in.nextInt();

        int[] arr = new int[n];
        System.out.println("Enter the array elements in ascending order sorted: ");
        for (int i=0; i<arr.length; i++){
            arr[i] = in.nextInt();
        }
        System.out.println("The elements of the array are:"+ Arrays.toString(arr));

        System.out.println("Enter the target element: ");
        int target = in.nextInt();

        System.out.println("Index of Ceiling: "+ceiling(arr, target));

    }

    static int ceiling(int[] arr, int target){
        if (target>arr[arr.length-1]){
            return -1;
        }
        int start=0;
        int end=arr.length-1;
        while (start<=end){
            int mid = start+(end-start)/2;
            if (target<arr[mid]){
                end = mid-1;
            }
            else if (target>arr[mid]){
                start = mid+1;
            }
            else{
                return mid;
            }
        }
        return start;
    }

}
