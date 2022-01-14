// Find Numbers with even number of digits
// URL: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/submissions/

package com.akshat;

public class evenNoOfDigits {

    public static void main(String[] args) {

        int[] arr = {12,345,2,6,7896};

        System.out.println(findNumbers(arr));

    }

    static int findNumbers(int[] nums){
        int count=0;
        for (int i=0; i<nums.length; i++){
            if(even(nums[i])){
                count++;
            }
        }
        return count;
    }

    static boolean even(int num){
        if(digits(num)%2==0){
            return true;
        }
        else{
            return false;
        }
    }

    static int digits(int num){
        if(num<0){
            num=num*-1;
        }
        if(num==0){
            return 1;
        }
        int c=0;
        int temp=num;
        while(num>0){
            temp =num%10;
            c++;
            num=num/10;
        }
        return c;
    }

}
