// To find the value of nth Magic Number (AMAZON INTERVIEW)

package com.akshat;

import java.util.Scanner;

public class MagicNumber {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.println("Enter the nth magic nember to get: ");
        int n = in.nextInt();

        int ans = 0;
        int base = 5;

        while (n>0){
            int last = n & 1;
            n = n >> 1;
            ans += last * base;
            base = base * 5;
        }

        System.out.println(ans);

    }

}
