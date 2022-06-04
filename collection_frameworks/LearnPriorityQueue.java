package com.Rhythm.Collection_Framework_in_one;

import java.util.Comparator;
import java.util.PriorityQueue;
import java.util.Queue;

public class LearnPriorityQueue {

    public static void main(String[] args) {

        Queue<Integer> pq = new PriorityQueue<>(); // MinHeap by default


        pq.offer(40);
        pq.offer(12);
        pq.offer(24);
        pq.offer(36);

        System.out.println(pq);

        pq.poll();
        System.out.println(pq);

        System.out.println(pq.peek());

        Queue<Integer> pq1 = new PriorityQueue<>(Comparator.reverseOrder()); // Coversion of MinHeap to MaxHeap

        pq1.offer(40);
        pq1.offer(12);
        pq1.offer(24);
        pq1.offer(36);

        System.out.println(pq1);

    }

}
