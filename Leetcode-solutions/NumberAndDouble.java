// Check If N and Its Double Exist
// URL: https://leetcode.com/problems/check-if-n-and-its-double-exist/

package com.akshat;

public class NumberAndDouble {

    public static void main(String[] args) {

        int[] arr = {10, 2, 5, 3};

        System.out.println(checkIfExist(arr));

    }

    static boolean checkIfExist(int[] arr) {
        if (arr.length == 0 || arr == null){
            return false;
        }
        for (int i=0; i<arr.length; i++){
            for (int j=0; j<arr.length; j++){
                if (arr[i] == 2*arr[j] && i != j){
                    return true;
                }
            }
        }
        return false;
    }

}
