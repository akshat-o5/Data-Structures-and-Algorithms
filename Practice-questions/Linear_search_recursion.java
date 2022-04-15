// LINEAR SEARCH USING RECURSION

package com.akshat;

public class Linear_search_recursion {

    public static void main(String[] args) {

        int[] arr = {1, 4, 5, 6, 77, 4 ,9, 7, 88, 77, 3, 22};
        int target = 77;
        int ans1 = findIndex(arr, target, 0);
        boolean ans2 = find(arr, target, 0);
        int ans3 = findIndexLast(arr, target, arr.length-1);
        System.out.println(ans1);
        System.out.println(ans2);
        System.out.println(ans3);

    }

    // TO FIND FIRST INDEX OF THE TARGET ELEMENT
    static int findIndex(int[] arr, int target, int index){
        if (index == arr.length){
            return -1;
        }
        if (arr[index] == target){
            return index;
        }
        return findIndex(arr, target, index+1);
    }

    // TO RETURN WHETHER TARGET ELEMENT EXISTS OR NOT
    static boolean find(int[] arr, int target, int index){
        if (index == arr.length){
            return false;
        }
        return arr[index]==target || find(arr, target, index+1);
    }

    // TO RETURN LAST INDEX OF THE TARGET ELEMENT OCCURING IN GIVEN ARRAY
    static int findIndexLast(int[] arr, int target, int index){
        if (index == -1){
            return -1;
        }
        if (arr[index] == target){
            return index;
        }
        return findIndexLast(arr, target, index-1);
    }

}
