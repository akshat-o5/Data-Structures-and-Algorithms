// Print nth fibonacci number with help of recursion

package com.akshat;

import java.util.Scanner;

public class FibboWithRecursion {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.println("Enter the Fibinacci number to find: ");
        int n = in.nextInt();

        int ans = fibbo(n);
        System.out.println(ans);

    }

    static int fibbo(int n){
        if (n < 2){
            return n;
        }
        return fibbo(n-1)+fibbo(n-2);
    }

}
