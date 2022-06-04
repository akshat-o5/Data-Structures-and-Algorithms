package com.Rhythm.Collection_Framework_in_one;

import java.util.Stack;

public class LearnStack  {

    public static void main(String[] args) {

        Stack<String> animals = new Stack<>();

        animals.push("lion");
        animals.push("dog");
        animals.push("horse");
        animals.push("cat");
        System.out.println(animals);

        System.out.println(animals.peek()); // To see the last inserted element of the stack

        animals.pop(); // Remove the last inserted element from the stack
        System.out.println(animals.peek());

    }

}
