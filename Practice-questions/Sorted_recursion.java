// FIND WHETHER ARRAY IS SORTED OR NOT USING RECURSION

package com.akshat;

public class Sorted_recursion {

    public static void main(String[] args) {

        int[] arr = {1, 2, 4, 5, 6};
        System.out.println(sorted(arr, 0));

    }

    static boolean sorted(int[] arr, int index){
        if(index == arr.length-1){
            return true;
        }
        return arr[index]<arr[index+1] && sorted(arr, index+1);
    }

}
