package com.Rhythm;

import java.util.Arrays;

public class mergerSort {

    public static void main(String[] args) {

        int[] arr = {5, 4, 3, 2, 1};
//        System.out.println(Arrays.toString(mergeSort(arr)));
        mergeSortinPlace(arr, 0, arr.length);
        System.out.println(Arrays.toString(arr));
    }


         //USING TWO POINTERS
    static int[] mergeSort(int[] arr){
        if (arr.length == 1){
            return arr;
        }
        int mid = arr.length / 2;
        int[] left = mergeSort(Arrays.copyOfRange(arr, 0, mid));
        int[] right = mergeSort(Arrays.copyOfRange(arr, mid, arr.length));
        return merge(left, right);
    }

    private static int[] merge(int[] left, int[] right) {
        int[] mix = new int[left.length + right.length];
        int i = 0;
        int j = 0;
        int k = 0;
        while (i < left.length && j < right.length) {
            if (left[i] < right[j]) {
                mix[k] = left[i];
                i++;
            } else {
                mix[k] = right[j];
                j++;
            }
            k++;
        }
        while (i < left.length){
            mix[k] = left[i];
            i++;
            k++;
        }
        while (j < right.length){
            mix[k] = right[j];
            j++;
            k++;
        }
        return mix;
    }

    static void mergeSortinPlace(int[] arr, int start, int end){
        if (end - start == 1){
            return;
        }
        int mid = (start + end) / 2;
        mergeSortinPlace(arr, start, mid);
        mergeSortinPlace(arr, mid, end);
        mergeInPlace(arr, start, mid, end);
    }

    // USING IN-PLACE MERGE SORT
    private static void mergeInPlace(int[] arr, int start, int mid, int end){
        int[] mix = new int[end - start];
        int i = start;
        int j = mid;
        int k = 0;
        while (i < mid && j < end){
            if (arr[i] < arr[j]){
                mix[k] = arr[i];
                i++;
            }
            else{
                mix[k] = arr[j];
                j++;
            }
            k++;
        }
        while (i < mid){
            mix[k] = arr[i];
            i++;
            k++;
        }
        while (j < end){
            mix[k] = arr[j];
            j++;
            k++;
        }
        System.arraycopy(mix, 0, arr, start, mix.length);
    }

}
