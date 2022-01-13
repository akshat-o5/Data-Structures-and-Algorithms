// Minimum Number: In this question, we have to find the minimum number in an array of numbers.

package com.akshat;

import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class minimumNumber {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.println("Enter the limit of an array: ");
        int n = in.nextInt();
        
        int[] arr = new int[n];

        System.out.println("Enter the elements of an array: ");
        for (int i=0; i<n; i++){
            arr[i] = in.nextInt();
        }
        System.out.println("The given array is: "+ Arrays.toString(arr));

        System.out.println("The minimum number is: "+ minimum(arr));

    }

    static int minimum(int[] arr){
        int ans = arr[0];
        for (int idx=0; idx<arr.length; idx++){
            if(arr[idx]<ans){
                ans = arr[idx];
            }
        }
        return ans;
    }

}
