package com.akshat;

public class BsWithRecursion {

    public static void main(String[] args) {

        int[] arr = {1, 2, 5, 6, 8, 99, 655, 1000};
        int target = 99;

        System.out.println(search(arr, target, 0, arr.length-1));

    }

    static int search(int[] arr, int target, int start, int end){
        if (start > end){
            return -1;
        }
        int mid = start + (end - start) / 2;
        if (target == arr[mid]){
            return mid;
        }
        if (target < arr[mid]){
            return search(arr, target, start, mid-1);
        }
        else{
            return search(arr, target, mid+1, end);
        }
    }

}
