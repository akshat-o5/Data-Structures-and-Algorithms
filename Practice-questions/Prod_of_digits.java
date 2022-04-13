// FIND PRODUCT OF DIGITS OF A GIVEN NUMBER USING RECURSION

package com.akshat;

public class Prod_of_digits {

    public static void main(String[] args) {
        int ans = prodOfDigits(1342);
        System.out.println(ans);
    }

    static int prodOfDigits(int n){
        if(n%10 == n){
            return n;
        }
        return (n%10) * prodOfDigits(n/10);
    }

}
