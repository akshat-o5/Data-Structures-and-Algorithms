// Number of Steps to Reduce a Number to Zero
// URL : https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

package com.akshat;

public class NoOfSteps {

    public static void main(String[] args) {
        int num = 41;
        int ans = numberOfSteps(num);
        System.out.println(ans);
    }

     static int numberOfSteps(int num){
        return helper(num, 0);
    }

    static int helper(int num, int steps){
        if(num == 0){
            return steps;
        }
        if(num % 2 == 0){
            return helper(num/2, steps+1);
        }
        return helper(num-1, steps+1);
    }

}
