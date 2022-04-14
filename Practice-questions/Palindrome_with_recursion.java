// CHECK FOR A PALINDROME NUMBER USING RECURSION

package com.akshat;

public class Palindrome_with_recursion{

    static int sum = 0;
    static void rev2(int n){
        if(n==0){
            return;
        }
        int rem = n%10;
        sum = sum*10 + rem;
        rev2(n/10);
    }

    public static void main(String[] args) {

        rev2(121);
        System.out.println(palin(121));

    }

    static boolean palin(int n){
        return n == sum;
    }

}
