// Given an array of integers, in which, all the integers are duplicated, except for one. Find that integer.

package com.akshat;

public class Unique {

    public static void main(String[] args) {

        int[] arr = {2, 3, 3, 4,  2, 6, 4};

        System.out.println(check(arr));

    }

    static int check(int[] arr){
        int unique = 0;
        for (int i=0; i<arr.length; i++){
            unique ^= arr[i];
        }
        return unique;
    }

}
