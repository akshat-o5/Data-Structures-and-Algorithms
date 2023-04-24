class EvenOdd_Avg{

      public static void main(String args[]){

      int n = Integer.parseInt(args[0]);

      int cntEven=0,cntOdd=0,sumEven=0,sumOdd=0;

      while(n > 0){

           if(n%2==0){

               cntEven++;

               sumEven = sumEven + n;

           }

           else{

               cntOdd++;

               sumOdd = sumOdd + n;

           }

           n--;

      }

      int evenAvg,oddAvg;

      evenAvg = sumEven/cntEven;

      oddAvg = sumOdd/cntOdd;

      System.out.println("Average of first N Even no is "+evenAvg);

      System.out.println("Average of first N Odd no is "+oddAvg);

 

  }

}

