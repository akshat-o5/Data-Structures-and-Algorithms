// YOU ARE GIVEN A NUMBER, CHECK IF IF IT IS POWER OF TWO OR NOT.

package com.akshat;

import java.util.Scanner;

public class PowOfTwo {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.println("Enter the number to be checked: ");
        int n = in.nextInt();

        boolean ans = (n & (n - 1)) == 0;

        System.out.println(ans);

    }

}