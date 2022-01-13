// Search In 2D Array: in this question, we will search for an element in 2D array and return it's index.

package com.akshat;

import java.util.Arrays;
import java.util.Scanner;

public class searchIn2DArray {

    public static void main(String[] args) {


        Scanner in = new Scanner(System.in);

        System.out.println("Enter the number of rows.");
        int n = in.nextInt();

        int[][] arr = new int[n][n];
        System.out.println("Enter the elements in an array: ");
        for(int row=0; row<n; row++){
            for(int col=0; col<n; col++){
                arr[row][col]=in.nextInt();
            }
        }
        for(int row=0; row<n; row++){
            for(int col=0; col<n; col++){
                System.out.print(arr[row][col]);
            }
        }
        System.out.println();

        System.out.println("Enter the target element: ");
        int target = in.nextInt();

        int[] ans = searchIn2D(arr, target);
        System.out.println("Index: "+ Arrays.toString(ans));

    }

    static int[] searchIn2D(int[][] arr, int target){
        for (int row=0; row<arr.length; row++){
            for (int col=0; col<arr[row].length; col++){
                if (arr[row][col]==target){
                    return new int[] {row, col};
                }
            }
        }
        return new int[] {-1, -1};
    }

}
