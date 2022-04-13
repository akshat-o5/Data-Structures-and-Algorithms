// Print numbers from n to one using recursion

package com.akshat;

public class N_to_One {

    public static void main(String[] args) {
        fun1(5);
    }

    static void fun1(int n){
        if(n == 0){
            return;
        }
        System.out.println(n);
        fun1(n-1);
    }

}
