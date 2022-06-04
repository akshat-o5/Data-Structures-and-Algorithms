package com.Rhythm.Collection_Framework_in_one;

import java.util.HashMap;
import java.util.Map;

public class LearnMap {

    public static void main(String[] args) {

        Map<String, Integer> numbers = new HashMap<>();

        numbers.put("One", 1);
        numbers.put("Two", 2);
        numbers.put("Three", 3);
        numbers.put("Four", 4);
        numbers.put("Five", 5);

        numbers.putIfAbsent("Two", 23); // It puts the value , if key is unique, otherwise ignores it.

        System.out.println(numbers);

        for (Map.Entry<String, Integer> e: numbers.entrySet()){ // Usee to iterate through each and every entry
            System.out.println(e); // Prints Entry
            System.out.println(e.getKey()); // Prints Key
            System.out.println(e.getValue()); // Prints Value
        }

        // To iterate through "keys" only
        for (String key: numbers.keySet()){
            System.out.println(key);
        }

        // To iterate through "values" only
        for (Integer value: numbers.values()){
            System.out.println(value);
        }

        System.out.println(numbers.containsKey("Three")); // Used to check for a particular key

        System.out.println(numbers.containsValue(3)); // Used to check for a particular value

        System.out.println(numbers.isEmpty()); // Used to check for an empty set



    }

}
