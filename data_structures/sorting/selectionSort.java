// Selection Sort

package com.akshat;

import java.util.Scanner;
import java.util.*;

public class selectionSort {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.println("Enter the number of elements: ");
        int n = in.nextInt();

        int[] arr = new int[n];
        System.out.println("Enter the elements of the array: ");
        for(int i=0; i<n; i++) {
            arr[i] = in.nextInt();
        }
        System.out.println(Arrays.toString(arr));

        selectionSort(arr);

        System.out.println(Arrays.toString(arr));
    }




    static void selectionSort(int[] arr){
        for (int i=0; i< arr.length; i++){
            int last = arr.length-i-1;
            int maxIndex = getMaxIndex(arr, 0, last);
            swap(arr, maxIndex, last);
        }
    }

    static void swap(int[] arr, int first, int second ){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }

    static int getMaxIndex(int[] arr, int start, int end){
        int max = start;
        for(int i=start; i<=end; i++){
            if(arr[i]>arr[max]){
                max = i;
            }
        }
        return max;
    }

}

