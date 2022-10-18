import java.util.*
import java.io.*

public class Main
{

    public static void main(String[] args) 
    {

        int number = 371, original, remainder, result = 0;

        original = number;

        while (original!= 0)
        {
            remainder = original % 10;
            result += Math.pow(remainder, 3);
            original /= 10;
        }

        if(result == number)
            System.out.println(number + " is an Armstrong number.");
        else
            System.out.println(number + " is not an Armstrong number.");
    }
}
