import java.util.Arrays;
import java.util.BitSet;
 
/**
 * Java program to find missing elements in a Integer array containing 
 * numbers from 1 to 100.
 *
 * @author Javin Paul
 */
public class MissingNumberInArray {
 
    public static void main(String args[]) {

        // one missing number
        printMissingNumber(new int[]{1, 2, 3, 4, 6}, 6);
 
        // two missing number
        printMissingNumber(new int[]{1, 2, 3, 4, 6, 7, 9, 8, 10}, 10);
 
        // three missing number
        printMissingNumber(new int[]{1, 2, 3, 4, 6, 9, 8}, 10);
 
        // four missing number
        printMissingNumber(new int[]{1, 2, 3, 4, 9, 8}, 10);
 
        // Only one missing number in array
        int[] iArray = new int[]{1, 2, 3, 5};
        int missing = getMissingNumber(iArray, 5);
        System.out.printf("Missing number in array %s is %d %n", 
                           Arrays.toString(iArray), missing);
    }
   /**
    * A general method to find missing values from an integer array in Java.
    * This method will work even if array has more than one missing element.
    */
    private static void printMissingNumber(int[] numbers, int count) {
        int missingCount = count - numbers.length;
        BitSet bitSet = new BitSet(count);
 
        for (int number : numbers) {
            bitSet.set(number - 1);
        }
 
        System.out.printf("Missing numbers in integer array %s, with total number %d is %n",
        Arrays.toString(numbers), count);
        int lastMissingIndex = 0;

        for (int i = 0; i < missingCount; i++) {
            lastMissingIndex = bitSet.nextClearBit(lastMissingIndex);
            System.out.println(++lastMissingIndex);
        }
 
    }
   /**
    * Java method to find missing number in array of size n containing
    * numbers from 1 to n only.
    * can be used to find missing elements on integer array of 
    * numbers from 1 to 100 or 1 - 1000
    */
    private static int getMissingNumber(int[] numbers, int totalCount) {
        int expectedSum = totalCount * ((totalCount + 1) / 2);
        int actualSum = 0;
        for (int i : numbers) {
            actualSum += i;
        }
 
        return expectedSum - actualSum;
    }
 
}
 
Output
Missing numbers in integer array [1, 2, 3, 4, 6], with total number 6 is
5
Missing numbers in integer array [1, 2, 3, 4, 6, 7, 9, 8, 10], with total number 10 is
5
Missing numbers in integer array [1, 2, 3, 4, 6, 9, 8], with total number 10 is
5
7
10
Missing numbers in integer array [1, 2, 3, 4, 9, 8], with total number 10 is
5
6
7
10
Missing number in array [1, 2, 3, 5] is 4
