// VALID PALINDROME
// https://leetcode.com/problems/valid-palindrome/

package com.akshat;

public class validPalindrome {

    public static void main(String[] args) {

        String s = "A man, a plan, a canal: Panama";

        System.out.println(isPalindrome(s));

    }

    static boolean isPalindrome(String s) {

        String str = "";
        s = s.replaceAll("[^a-zA-Z0-9]", "");
        s = s.toLowerCase();
        s = s.replaceAll("\\s", "");
        for(int i=s.length()-1; i>=0; i--){
            char ch = s.charAt(i);
            str = str+ch;
        }
        if(str.equals(s)){
            return true;
        }
        else {
            return false;
        }

    }

}
