// Find the no. of digits in a base b.

package com.akshat;

import java.util.Scanner;

public class NoOfDigits {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.println("Enter the value: ");
        int n = in.nextInt();

        System.out.println("Enter the total number of digits that a base, in which you want to convert, contain: ");
        int b = in.nextInt();

        int ans = (int)(Math.log(n) / Math.log(b)) + 1;

        System.out.println(ans);

    }

}
