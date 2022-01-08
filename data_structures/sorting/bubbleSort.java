// Bubble Sort

package com.akshat;

import java.util.Scanner;
import java.util.*;

public class bubbleSort {

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

        bubbleSort(arr);

        System.out.println(Arrays.toString(arr));
    }




    static void bubbleSort(int[] arr){
        boolean swapped;
        for(int i=0; i< arr.length; i++){
            swapped = false;
            for(int j=1; j< arr.length-i; j++){
                if(arr[j]<arr[j-1]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                    swapped = true;
                }
            }
            if(!swapped){
                break;
            }
        }
    }

}

