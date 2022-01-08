// LINEAR SEARCH

package com.akshat;

import java.util.Arrays;
import java.util.Scanner;

public class linearSearch {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.println("Enter the limit of array: ");
        int n = in.nextInt();
        int[] arrN = new int[n];
        int[] arr = new int[arrN.length];

        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < arrN.length; i++) {
            arr[i] = in.nextInt();
        }

        System.out.println("The required array is"+ Arrays.toString(arr));

        System.out.println("Enter the target element: ");
        int tarr = in.nextInt();

        int ans = linearSearch(arr, tarr);
        System.out.println("Target lies at index number: "+ans);

    }

    static int linearSearch(int[] arr, int tarr) {
        if (arr.length == 0) {
            return -1;
        }
        for (int idx = 0; idx < arr.length; idx++) {
            if (arr[idx] == tarr) {
                return idx;
            }
        }
        return -1;
    }

}
