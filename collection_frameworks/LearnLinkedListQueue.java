package com.Rhythm.Collection_Framework_in_one;

import java.util.LinkedList;
import java.util.Queue;

public class LearnLinkedListQueue {

    public static void main(String[] args) {

        Queue<Integer> queue = new LinkedList<>();

        queue.offer(12); // It helps in putting element in a queue
        queue.offer(24);
        queue.offer(36);

        System.out.println(queue);

        System.out.println(queue.poll()); // Used to remove first element
        System.out.println(queue);

        System.out.println(queue.peek()); // It is used to check which element is next in line to get removed

    }

}
