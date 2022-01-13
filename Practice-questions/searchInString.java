//Search in a given string: In this program, we have to search in a given string and find out whether the target character exists in that string or not.

package com.akshat;

import java.util.*;
import java.util.Scanner;

public class searchInString {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.println("Enter the give string: ");
        String str = in.nextLine();

        System.out.println("Enter the target character: ");
        char ch = in.next().charAt(0);

        System.out.println(search(str, ch));

    }

    static boolean search(String str, char target){
        if(str.length()==0){
            return false;
        }
        for (int i=0; i<str.length(); i++){
            if(target==str.charAt(i)){
                return true;
            }
        }
        return false;
    }

}
