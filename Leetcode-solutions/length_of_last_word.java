// LENGTH OF LAST WORD
// URL: https://leetcode.com/problems/length-of-last-word/


package com.akshat;

public class length_of_last_word {

    public static void main(String[] args) {

        String s = "   fly me   to   the moon  ";

        System.out.println(lengthOfLastWord(s));

    }

    static int lengthOfLastWord(String s) {
        int c=0;
        s=s.trim();
        for(int i=s.length()-1; i>s.lastIndexOf(' '); i--){
            if(s.charAt(i)!=' ')
                c++;
        }
        return c;
    }

}
