package com.Rhythm.Collection_Framework_in_one;

import java.util.ArrayList;
import java.util.Iterator;

public class LearnArrayList {

    public static void main(String[] args) {

//        ArrayList<String> studentsName = new ArrayList<>();
//        studentsName.add("Rakesh");

//        ArrayList<Integer> list = new ArrayList<>();
//        list.add(1);
//        list.add(2);
//        list.add(3);
//        System.out.println(list);
//
//        list.add(4); // This will add 4 at the end of the list
//        System.out.println(list);
//
//        list.add(1, 50); // This will add 50 at the first index
//        System.out.println(list);
//
//        ArrayList<Integer> newList = new ArrayList<>(); // Creating a new list
//        newList.add(150);
//        newList.add(160);
//
//        list.addAll(newList); // This will add all the elements of new list to the end of old list.
//        System.out.println(list);
//
//        System.out.println(list.get(3)); // Getting an element from a particular index number.

        ArrayList<Integer> list2 = new ArrayList<>();
        list2.add(10);
        list2.add(20);
        list2.add(30);
        list2.add(40);
        list2.add(50);
        list2.add(60);
        list2.add(70);
        list2.add(80);
        System.out.println(list2);

//        list2.remove(1);// This will remove element at index number 1 from the list.
//        System.out.println(list2);
//
//        list2.remove(Integer.valueOf(30)); // This will remove the provided integer value from the list, if the value exists inside the list
//        System.out.println(list2);
//
//        list2.clear(); // This will clear the whole list.
//        System.out.println(list2);

//        list2.set(2, 1000); // To change the value of a particular index.
//        System.out.println(list2);
//
//        System.out.println(list2.contains(500)); // This will check for the value in the list and will return true or false

        // Iterating in list
//        for (int i = 0; i < list2.size(); i++){
//            System.out.println("the element is :" + list2.get(i));
//        }

        // Using Iterator
        Iterator<Integer> it = list2.iterator();

        while (it.hasNext()){ //It checks whether the itator has any next value or not
            System.out.println("iterator" + it.next());
        }

    }
}
