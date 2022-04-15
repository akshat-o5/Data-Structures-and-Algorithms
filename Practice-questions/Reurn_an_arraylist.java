// RETURNING AN ARRAYLIST USING RECURSION

package com.akshat;

import java.util.ArrayList;

public class Reurn_an_arraylist {

    public static void main(String[] args) {

        int[] arr = {1, 4, 5, 6, 77, 4 ,9, 7, 88, 77, 3, 22};
        int target = 77;
        System.out.println(findAllIndex2(arr, target, 0));

    }

    static ArrayList<Integer> findAllIndex2(int[] arr, int target, int index) {

        ArrayList<Integer> list = new ArrayList<>();

        if (index == arr.length) {
            return list;
        }

        // this will contain answer for that function call only
        if (arr[index] == target) {
            list.add(index);
        }
        ArrayList<Integer> ansFromBelowCalls = findAllIndex2(arr, target, index + 1);

        list.addAll(ansFromBelowCalls);

        return list;
    }

}
