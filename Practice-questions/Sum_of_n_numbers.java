// FIND SUM OF FIRST N NUMBERS USING RECURSION

package com.akshat;

public class Sum_of_n_numbers{

    public static void main(String[] args) {
        int ans = sumOfNNumbers(5);
        System.out.println(ans);
    }

    static int sumOfNNumbers(int n){
        if (n<=1){
            return 1;
        }
        return n + sumOfNNumbers(n-1);
    }

}
