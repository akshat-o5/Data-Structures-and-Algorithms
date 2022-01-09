// Search in 2D Matrix - 2
// URL: https://leetcode.com/problems/search-a-2d-matrix-ii/

package com.akshat;

public class searchIn2dMatrix {

    public static void main(String[] args) {

        int[][] matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
        int target = 5;

        System.out.println(searchMatrix(matrix, target));

    }

        static boolean searchMatrix(int[][] matrix, int target) {
            for(int row=0; row<matrix.length; row++){
                for(int col=0; col<matrix[row].length; col++){
                    if(target==matrix[row][col]){
                        return true;
                    }
                }
            }
            return false;
        }

}

