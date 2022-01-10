// PALINDROME NUMBER
// URL: https://leetcode.com/problems/palindrome-number/

package com.akshat;

public class palindromeNumber {

    public static void main(String[] args) {

        int x = 121;
        System.out.println(isPalindrome(x));

    }

    static boolean isPalindrome(int x) {
        int y=0;
        int temp=x;
        while(x>0){
            int a = x%10;
            y=(y*10)+a;
            x=x/10;
        }
        if(temp==y){
            return true;
        }
        else{
            return false;
        }
    }

}
