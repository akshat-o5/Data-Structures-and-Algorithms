// CHECK IF THE SENTENCE IS PANAGRAM
// URL: https://leetcode.com/problems/check-if-the-sentence-is-pangram/

package com.akshat;

public class check_if_the_sentence_is_panagram {

    public static void main(String[] args) {

        String sentence = "thequickbrownfoxjumpsoverthelazydog";

        System.out.println(checkIfPangram(sentence));

    }

    static boolean checkIfPangram(String sentence) {

        for(char i='a';i<='z';i++)
            if(!(sentence.contains(String.valueOf(i))))
                return false;

        return true;

    }

}
